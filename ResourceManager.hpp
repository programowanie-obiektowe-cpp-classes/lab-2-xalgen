#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource* resource;

public:

    ResourceManager(): resource(new Resource()){}

    ResourceManager(const ResourceManager& t) : resource(new Resource(*t.resource)){}

    ResourceManager& operator=(const ResourceManager& t)
    {
        if (this != &t)
        {
            delete resource;
            resource = new Resource(*t.resource);
        }
        return *this;
    }

    double get()
    {
        return resource->get(); 
    }
    ~ResourceManager() { 
        delete resource; 
    }
};
