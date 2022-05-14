#include <iostream>

using std::cout;
using std::endl;

struct Data {
	int i;
	float f;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main() {
	Data *data = new Data();

	data->i = 100;
	data->f = 200;

	cout << "before " << data->i << endl;
	cout << "before " << data->f << endl;

	uintptr_t raw = serialize(data);

	cout << "raw " << raw << endl;

	Data *deserializedData = deserialize(raw);

	cout << "after " << deserializedData->i << endl;
	cout << "after " << deserializedData->f << endl;

	cout << data << endl;
	cout << deserializedData << endl;

	delete data;
}