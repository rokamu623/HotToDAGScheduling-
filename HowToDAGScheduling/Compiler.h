﻿#pragma once
#include "DAG.h"
#include "SchedGrid.h"
#include "CompileLog.h"
#include "SEManager.h"
#include "CompileEffect.h"

class Compiler
{
private:
	Rect _console_field;
	Font _font;
	String _message;

	Optional<CompileEffect> _effect;
public:
	Compiler();

	void compile(DAG& dag, SchedGrid& grid);

	void draw_field() const { _console_field.draw(LAYOUT::FIELD_COLOR); };
	void update();
	void draw() const;
};

