//
// Created by vime-arch on 04/12/2025.
//

#pragma once
#include <memory>

template <typename T>
struct AVLNode {

    T data;
    int height;
    AVLNode<T>* parent;
    std::unique_ptr<AVLNode<T>> lChild;
    std::unique_ptr<AVLNode<T>> rChild;

    AVLNode() : data{T{}}, height{1}, parent{nullptr} {}

    AVLNode(const T& inData) : data{inData}, height{1}, parent{nullptr} {}

};

