
class Message
{
public:
    Message(void)
    {
        this->currentID = ++Message::ID;
    }
    Message(const string &text) : text(text)
    {
        this->currentID = ++Message::ID;
    }

    const string &get_text(void)
    {
        return this->text;
    }
    inline bool operator<(const Message &msg)
    {
        return this->currentID < msg.currentID;
    }

private:
    static int ID;
    int currentID;
    string text;
};

int Message::ID = 0;

class MessageFactory
{
public:
    MessageFactory(void) {}

    Message create_message(const string &text)
    {
        return Message(text);
    }
};