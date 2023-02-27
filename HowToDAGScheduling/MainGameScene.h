﻿#pragma once
#include <Siv3D.hpp>
#include "DAG.h"
#include "SchedGrid.h"
#include "Compiler.h"
#include "DAGJsonReader.h"
#include "SceneName.h"
#include "BGMManager.h"
#include "SEManager.h"

class MainGameScene : public App::Scene
{
private:
	DAG dag;
	SchedGrid grid;
	Compiler compiler;

	bool _compile_flag;

	DrawableText _stage_title;

	Point _home_button_pos;

public:
	MainGameScene(const InitData& init);

	void update() override;
	void draw() const override;
};

