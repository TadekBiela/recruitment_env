#pragma once

class App
{
public:
    App() = default;
    virtual ~App() = default;

    bool foo() const;
private:
    bool isReady{true};
};
