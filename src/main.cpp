#include <iostream>
#include "../generated/proto/message.pb.h"

int main() {
    example::Person person;
    person.set_name("Alice");
    person.set_id(1);
    person.set_email("alice@example.com");

    std::string data;
    person.SerializeToString(&data);

    example::Person decoded;
    decoded.ParseFromString(data);

    std::cout << "Name: " << decoded.name() << "\n";
    std::cout << "ID: " << decoded.id() << "\n";
    std::cout << "Email: " << decoded.email() << "\n";

    return 0;
}
