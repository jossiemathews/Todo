# Use the official Ubuntu base image
FROM ubuntu:22.04

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive

# Install GCC, G++, CMake, and essential build tools
RUN apt-get update && apt-get install -y \
    build-essential \
    gcc-12 g++-12 \
    cmake \
    && apt-get clean

# Set GCC-12 and G++-12 as the default compilers
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 100
RUN update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 100

# Create a working directory
WORKDIR /app

# Expose port if needed (e.g., for debugging)
EXPOSE 8080

# Set the entry point to bash
CMD ["/bin/bash"]
