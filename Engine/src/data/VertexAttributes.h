#pragma once

#include "Vertex.h"

#include "data/BufferAccessor.h"

#include "graphics/RefOpenGL.h"

#include <assert.h>
#include <vector>


struct VertexAttributes {
    // Specialize this template to create custom vertex attribute for your struct.
    template<typename T>
    static std::vector<BufferAccessor> create() { assert(false); }
};


template<>
std::vector<BufferAccessor> VertexAttributes::create<Vertex_PositionColor>();

template<>
std::vector<BufferAccessor> VertexAttributes::create<Vertex_PositionTexCoord>();

template<>
std::vector<BufferAccessor> VertexAttributes::create<Vertex_PositionNormalTexCoord>();

template<>
std::vector<BufferAccessor> VertexAttributes::create<Vertex_FBX>();

template<>
std::vector<BufferAccessor> VertexAttributes::create<Vertices_FBX>();
