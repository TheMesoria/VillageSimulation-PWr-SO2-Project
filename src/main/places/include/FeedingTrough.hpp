//
// Created by black on 02.06.18.
//

#pragma once


#include <Place.hpp>

class FeedingTrough : public eng::Place
{
protected:
	FeedingTrough(const sf::Vector2f& size, const sf::Vector2f& position);
public:
	explicit FeedingTrough();

	virtual std::string getName() override;
};

