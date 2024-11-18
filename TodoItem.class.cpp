#include <iostream>
#include <vector>
class TodoItem
{
    private:
        std::string todo_item_tilte;
        bool status = false;
    
    public:
    TodoItem(const std::string &title) {
        // todo_item_tilte = title;
        todo_item_tilte = title;
    }

    void set_status(const bool &new_status) {
        status = new_status;
    }

    std::string display_title() const {
        return todo_item_tilte;
    }

};

class Todo {
    // Initialize a statuis string as Todo List
    static const std::string status_string;
    std::vector<TodoItem> todo_list;
    public:
    Todo() {
        std::cout << status_string << std::endl;
    }

    void add_item(const std::string &title) {
        todo_list.push_back(TodoItem(title));
    }
    void display() {
        for(const TodoItem &item: todo_list) {
           std::cout<<item.display_title()<<std::endl;
        }
    }

};
const std::string Todo::status_string = "Todo List";

int main() {
    Todo todo;
    // todo.add_item("Buy Milk");
    // todo.add_item("Buy Eggs");
    // todo.add_item("Buy Bread");
    // todo.display();
    int choice;
    std::cout<<"Hello World"<<std::endl;
    std::cin>>choice;
    std::cout<<choice<<std::endl;
    

    return 0;
}