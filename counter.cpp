#include <iostream>
#include <climits>
#include <thread>

.
void thread_counter(int thread_id) {
    for (unsigned i = 0; i < UINT_MAX; ++i) {
        std::cerr << i << " thread " << thread_id << std::endl;
    }
}

int main() {

}
