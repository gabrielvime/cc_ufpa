//
// Created by vime-arch on 23/12/2025.
//

#pragma once
#include <memory>

enum class Color { RED , BLACK };

template <typename T>
struct RBNode
{
    T data;
    Color color;
    RBNode<T>* parent;
    std::unique_ptr<RBNode<T>> lChild;
    std::unique_ptr<RBNode<T>> rChild;

    RBNode() : data{T{}}, color{Color::RED}, parent{nullptr} {}

    RBNode(const T& inData) : data{inData}, color{Color::RED}, parent{nullptr} {}

};

