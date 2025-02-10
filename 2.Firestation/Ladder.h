#pragma once

class Ladder 
{
public:
	Ladder(float length = 0.0f)
		:length(length)
	{
	}

	float GetLength() const { return length;}
	void SetLength(float legnth) { this->length = length; }

private:
	float length = 0.0f;
};