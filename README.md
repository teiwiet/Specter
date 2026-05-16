# Runtime Sentinel
An eBPF-based runtime security monitor for Linux,
inspired by Falco and Tetragon.

## What it does
- Traces process execution (execve)
- Monitors network connections (tcp_connect)
- Watches sensitive file access (openat)
- Alerts on suspicious behavior via configurable rules

## Architecture

## Build
sudo apt install clang llvm libbpf-dev bpftool
make
sudo ./sentinel

## Demo

## Status
- [x] Process tracer
- [ ] Network tracer      ← đang làm đến đây
- [ ] File tracer
- [ ] Rule engine (YAML)
