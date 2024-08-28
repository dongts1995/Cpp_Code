# 1. Race Condition and Deadlock

## Race Condition

là một tình huống trong lập trình mulyi-thread hoặc multi-process khi hai hoặc nhiều thread/process cùng truy cập và thao tác trên một tài nguyên chung mà không có sự điều phối hợp lý dẫn tới kết quả không được như mong muốn hoặc không đoán trước được.

Ví dụ:

## Cách phát hiện Race Condition

- Sử dụng công cụ ThreadSanitizer, Helgrind (trong Valgrind)
- Show log

## Cách tránh Race Condition
- std::mutex
- std::lock_guard
- std::unique_lock

Ví dụ: 
- std::atomic
- Synchronization Primitives: Sử dụng các cơ chế đồng bộ khác như condition variables, semaphores để điều phối hoạt động giữa các luồng.
- Immutable Objects: Sử dụng các đối tượng bất biến (immutable) hoặc thiết kế chương trình theo hướng không chia sẻ trạng thái giữa các luồng.

## Deadlock

Deadlock là một tình huống trong lập trình multi-thread hoặc multi-process, khi hai hoặc nhiều luồng bị kẹt vĩnh viễn vì mỗi luồng đang chờ tài nguyên của một luồng khác nắm giữ. Khi deadlock xảy ra chương trình sẽ bị treo.

## Cách tránh hoặc giải quyết vấn đề deadlock trong C++

- Tránh thứ tự khóa tài nguyên chéo (Avoid Lock Order Inversion): Đảm bảo các thread khóa mutex theo cùng thứ tự
- Sử dụng std::lock: C++ cung cấp hàm std::lock() để khóa nhiều mutex cùng lúc mà không xảy ra deadlock
- Sử dụng std::try_lock

# Mutex và Condition Variables

## Sự khác biệt giữa `mutex` và `recursive_mutes`:
## Khi nào nên sử dụng `recursive_mutex`:
## Hiện tượng khi lock một `mutex` đang bị lock bởi thread khác:
## Hiện tượng khi lock một `mutex` đang bị lock bởi thread hiện tại:
## Hiện tượng khi lock một `recursive_mutex` đang bị lock bởi thread hiện tại:
## `condition_variable`
## `wait()`, `notify_one()`, `notify_all()` trong `condition_variable`

# Atomic Operations và Memory Ordering

## Phân biệt `atomic` và `mutex`:
## Các loại memory ordereing trong `atomic`:

# Thread Safety và Synchronization

## Thread-Safe
## Class Thread-safe
## double-checked locking pattern
## Vấn đề double-checked locking pattern trong C++11
## Khắc phục: Sử dụng atomic, mutex, call_once, once_flag

# Thread Pools và Task-based Parallelism

## Thread Pools:
## task-based parallelism (ví dụ: std::async, std::future, std::promise) và thread-based parallelism

# Advanced Thread Synchronization Techniques

## Cơ chế Lock-Free trong Lập Trình Đa Luồng
## Compare-And-Swap (CAS):
## Wait-Free:
## Livelock là gì và nó khác gì với Deadlock?
## Cách tránh Livelock:

# Thread Local Storage (TLS)

# Parallelism and Concurrency Patterns

## Fork-Join Model là gì?
## C++ hỗ trợ Fork-Join như thế nào?
## Work-Stealing Algorithm là gì?

