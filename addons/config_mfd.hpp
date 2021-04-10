			class MFD
			{
				class AirplaneHUD
				{
					topLeft = "HUD_top_left";
					topRight = "HUD_top_right";
					bottomLeft = "HUD_bottom_left";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {0.15, 1, 0.15, 1};
					helmetMountedDisplay = 1;
					helmetPosition[] = {-0.0375, 0.0375, 0.1};
					helmetRight[] = {0.075, 0, 0};
					helmetDown[] = {0, -0.075, 0};
					turret[] = {-1};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5, 0.5};
						};
						class HorizonBankSource
						{
							type = "rotational";
							source = "HorizonBank";
							center[] = {0.5, 0.5};
							min = -6.2831;
							max = 6.2831;
							minAngle = -360;
							maxAngle = 360;
						};
						class HorizonDiveSource
						{
							source = "horizonDive";
							type = "linear";
							min = -1;
							max = 1;
							minPos[] = {0.5, 2.5};
							maxPos[] = {0.5, -1.5};
						};
						class VelocityVector
						{
							type = "vector";
							source = "velocityToView";
							pos0[] = {0.5, 0.5};
							pos10[] = {0.734, 0.73};
						};
						class ForwardVector
						{
							type = "vector";
							source = "forward";
							pos0[] = {0, 0};
							pos10[] = {0.234, 0.23};
						};
						class ASL_Instrument
						{
							type = "rotational";
							source = "altitudeASL";
							center[] = {0.9, 0.294872};
							min = 0;
							max = 20000;
							minAngle = 0;
							maxAngle = 72000;
							aspectRatio = 0.982906;
						};
						class Speed_Instrument: ASL_Instrument
						{
							source = "speed";
							center[] = {0.1, 0.294872};
							max = 555.556;
							maxAngle = 7200;
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPointToView";
							pos0[] = {0.5, 0.5};
							pos10[] = {0.734, 0.73};
						};
						class Limit0109
						{
							type = "limit";
							limits[] = {0.1, 0.1, 0.9, 0.9};
						};
						class Target
						{
							source = "targettoview";
							type = "vector";
							pos0[] = {0.5, 0.5};
							pos10[] = {0.734, 0.73};
						};
						class HorizonBankRot
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0.5, 0.5};
							min = -1.5708;
							max = 1.5708;
							minAngle = 90;
							maxAngle = 270;
							aspectRatio = 1;
						};
						class HorizonBankRotFull
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0, 0};
							min = -3.1416;
							max = 3.1416;
							minAngle = -180;
							maxAngle = 180;
							aspectRatio = 1;
						};
						class ThrustVectoringRotation
						{
							type = "rotational";
							source = "vtolvectoring";
							sourceScale = 100;
							center[] = {0.07, 0.785};
							min = 0;
							max = 100;
							minAngle = -180;
							maxAngle = "-180+90";
							aspectRatio = 0.982906;
						};
						class Level0
						{
							pos0[] = {0.5, 0.5};
							pos10[] = {0.834, 0.83};
							type = "horizontoview";
							angle = 0;
						};
						class LevelP5: Level0
						{
							angle = 5;
						};
						class LevelM5: Level0
						{
							angle = -5;
						};
						class LevelP10: Level0
						{
							angle = 10;
						};
						class LevelM10: Level0
						{
							angle = -10;
						};
						class LevelP15: Level0
						{
							angle = 15;
						};
						class LevelM15: Level0
						{
							angle = -15;
						};
						class LevelP20: Level0
						{
							angle = 20;
						};
						class LevelM20: Level0
						{
							angle = -20;
						};
						class LevelP25: Level0
						{
							angle = 25;
						};
						class LevelM25: Level0
						{
							angle = -25;
						};
						class LevelP30: Level0
						{
							angle = 30;
						};
						class LevelM30: Level0
						{
							angle = -30;
						};
						class LevelP35: Level0
						{
							angle = 35;
						};
						class LevelM35: Level0
						{
							angle = -35;
						};
						class LevelP40: Level0
						{
							angle = 40;
						};
						class LevelM40: Level0
						{
							angle = -40;
						};
						class LevelP45: Level0
						{
							angle = 45;
						};
						class LevelM45: Level0
						{
							angle = -45;
						};
						class LevelP50: Level0
						{
							angle = 50;
						};
						class LevelM50: Level0
						{
							angle = -50;
						};
						class LevelP55: Level0
						{
							angle = 55;
						};
						class LevelM55: Level0
						{
							angle = -55;
						};
						class LevelP60: Level0
						{
							angle = 60;
						};
						class LevelM60: Level0
						{
							angle = -60;
						};
						class LevelP65: Level0
						{
							angle = 65;
						};
						class LevelM65: Level0
						{
							angle = -65;
						};
						class LevelP70: Level0
						{
							angle = 70;
						};
						class LevelM70: Level0
						{
							angle = -70;
						};
						class LevelP75: Level0
						{
							angle = 75;
						};
						class LevelM75: Level0
						{
							angle = -75;
						};
						class LevelP80: Level0
						{
							angle = 80;
						};
						class LevelM80: Level0
						{
							angle = -80;
						};
						class LevelP85: Level0
						{
							angle = 85;
						};
						class LevelM85: Level0
						{
							angle = -85;
						};
						class LevelP90: Level0
						{
							angle = 90;
						};
						class LevelM90: Level0
						{
							angle = -90;
						};
						class Airport1
						{
							type = "vector";
							source = "airportCorner1toView";
							pos0[] = {0.5, 0.5};
							pos10[] = {0.734, 0.73};
						};
						class Airport2: Airport1
						{
							source = "airportCorner2toView";
						};
						class Airport3: Airport1
						{
							source = "airportCorner3toView";
						};
						class Airport4: Airport1
						{
							source = "airportCorner4toView";
						};
						class ILS_H
						{
							type = "ils";
							pos0[] = {0.5, 0.5};
							pos3[] = {0.5702, 0.5};
						};
						class ILS_W: ILS_H
						{
							pos3[] = {0.5, 0.569};
						};
					};
					class Draw
					{
						alpha = "user3";
						color[] = {"user0", "user1", "user2"};
						condition = "(1 - (cameraHeadingDiffY<=-29) + (abs(cameraHeadingDiffX)>=29))*on";
						class VelocityLine
						{
							type = "line";
							width = 2;
							points[] = {{"VelocityVector", {0, -0.0196581}, 1}, {"VelocityVector", {0.01, -0.0170239}, 1}, {"VelocityVector", {0.01732, -0.00982906}, 1}, {"VelocityVector", {0.02, 0}, 1}, {"VelocityVector", {0.01732, 0.00982906}, 1}, {"VelocityVector", {0.01, 0.0170239}, 1}, {"VelocityVector", {0, 0.0196581}, 1}, {"VelocityVector", {-0.01, 0.0170239}, 1}, {"VelocityVector", {-0.01732, 0.00982906}, 1}, {"VelocityVector", {-0.02, 0}, 1}, {"VelocityVector", {-0.01732, -0.00982906}, 1}, {"VelocityVector", {-0.01, -0.0170239}, 1}, {"VelocityVector", {0, -0.0196581}, 1}, {}, {"VelocityVector", {0.04, 0}, 1}, {"VelocityVector", {0.02, 0}, 1}, {}, {"VelocityVector", {-0.04, 0}, 1}, {"VelocityVector", {-0.02, 0}, 1}, {}, {"VelocityVector", {0, -0.0393162}, 1}, {"VelocityVector", {0, -0.0196581}, 1}, {}};
						};
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{"HUDCenter", {0.045, -0.011}, 1}, {"HUDCenter", {0.02, -0.011}, 1}, {"HUDCenter", {0.01, -0.001}, 1}, {"HUDCenter", {0, -0.011}, 1}, {"HUDCenter", {-0.01, -0.001}, 1}, {"HUDCenter", {-0.02, -0.011}, 1}, {"HUDCenter", {-0.045, -0.011}, 1}, {}, {{0.0925, 0.385791}, 1}, {{0.1075, 0.385791}, 1}, {}, {{0.1, 0.378419}, 1}, {{0.1, 0.393162}, 1}, {}, {{0.14687, 0.368427}, 1}, {{0.16187, 0.368427}, 1}, {}, {{0.15437, 0.361055}, 1}, {{0.15437, 0.375798}, 1}, {}, {{0.180473, 0.322967}, 1}, {{0.195473, 0.322967}, 1}, {}, {{0.187973, 0.315595}, 1}, {{0.187973, 0.330339}, 1}, {}, {{0.180473, 0.266776}, 1}, {{0.195473, 0.266776}, 1}, {}, {{0.187973, 0.259405}, 1}, {{0.187973, 0.274148}, 1}, {}, {{0.14687, 0.221317}, 1}, {{0.16187, 0.221317}, 1}, {}, {{0.15437, 0.213945}, 1}, {{0.15437, 0.228689}, 1}, {}, {{0.0925, 0.203953}, 1}, {{0.1075, 0.203953}, 1}, {}, {{0.1, 0.196581}, 1}, {{0.1, 0.211325}, 1}, {}, {{0.0381299, 0.221317}, 1}, {{0.0531299, 0.221317}, 1}, {}, {{0.0456299, 0.213945}, 1}, {{0.0456299, 0.228689}, 1}, {}, {{0.00452726, 0.266776}, 1}, {{0.0195273, 0.266776}, 1}, {}, {{0.0120273, 0.259405}, 1}, {{0.0120273, 0.274148}, 1}, {}, {{0.00452728, 0.322967}, 1}, {{0.0195273, 0.322967}, 1}, {}, {{0.0120273, 0.315595}, 1}, {{0.0120273, 0.330339}, 1}, {}, {{0.0381299, 0.368427}, 1}, {{0.0531299, 0.368427}, 1}, {}, {{0.0456299, 0.361055}, 1}, {{0.0456299, 0.375798}, 1}, {}, {"Speed_Instrument", {0, 0.065}, 1}, {"Speed_Instrument", {0, 0.085}, 1}, {}, {{0.86, 0.309615}, 1}, {{0.94, 0.309615}, 1}, {{0.94, 0.280128}, 1}, {{0.86, 0.280128}, 1}, {{0.86, 0.309615}, 1}, {}, {{0.8925, 0.385791}, 1}, {{0.9075, 0.385791}, 1}, {}, {{0.9, 0.378419}, 1}, {{0.9, 0.393162}, 1}, {}, {{0.94687, 0.368427}, 1}, {{0.96187, 0.368427}, 1}, {}, {{0.95437, 0.361055}, 1}, {{0.95437, 0.375798}, 1}, {}, {{0.980473, 0.322967}, 1}, {{0.995473, 0.322967}, 1}, {}, {{0.987973, 0.315595}, 1}, {{0.987973, 0.330339}, 1}, {}, {{0.980473, 0.266776}, 1}, {{0.995473, 0.266776}, 1}, {}, {{0.987973, 0.259405}, 1}, {{0.987973, 0.274148}, 1}, {}, {{0.94687, 0.221317}, 1}, {{0.96187, 0.221317}, 1}, {}, {{0.95437, 0.213945}, 1}, {{0.95437, 0.228689}, 1}, {}, {{0.8925, 0.203953}, 1}, {{0.9075, 0.203953}, 1}, {}, {{0.9, 0.196581}, 1}, {{0.9, 0.211325}, 1}, {}, {{0.83813, 0.221317}, 1}, {{0.85313, 0.221317}, 1}, {}, {{0.84563, 0.213945}, 1}, {{0.84563, 0.228689}, 1}, {}, {{0.804527, 0.266776}, 1}, {{0.819527, 0.266776}, 1}, {}, {{0.812027, 0.259405}, 1}, {{0.812027, 0.274148}, 1}, {}, {{0.804527, 0.322967}, 1}, {{0.819527, 0.322967}, 1}, {}, {{0.812027, 0.315595}, 1}, {{0.812027, 0.330339}, 1}, {}, {{0.83813, 0.368427}, 1}, {{0.85313, 0.368427}, 1}, {}, {{0.84563, 0.361055}, 1}, {{0.84563, 0.375798}, 1}, {}, {"ASL_Instrument", {0, 0.065}, 1}, {"ASL_Instrument", {0, 0.085}, 1}, {}, {{0.06, 0.309615}, 1}, {{0.14, 0.309615}, 1}, {{0.14, 0.280128}, 1}, {{0.06, 0.280128}, 1}, {{0.06, 0.309615}, 1}, {}, {{0.809096, 0.581406}, 1}, {{0.838074, 0.589038}, 1}, {}, {{0.777128, 0.657265}, 1}, {{0.803109, 0.672009}, 1}, {}, {{0.726274, 0.722406}, 1}, {{0.747487, 0.743257}, 1}, {}, {{0.66, 0.772391}, 1}, {{0.675, 0.797928}, 1}, {}, {{0.582822, 0.803813}, 1}, {{0.590587, 0.832295}, 1}, {}, {{0.5, 0.81453}, 1}, {{0.5, 0.844017}, 1}, {}, {{0.417178, 0.803813}, 1}, {{0.409413, 0.832295}, 1}, {}, {{0.34, 0.772391}, 1}, {{0.325, 0.797927}, 1}, {}, {{0.273726, 0.722406}, 1}, {{0.252513, 0.743257}, 1}, {}, {{0.222872, 0.657265}, 1}, {{0.196891, 0.672009}, 1}, {}, {{0.190904, 0.581406}, 1}, {{0.161926, 0.589038}, 1}, {}, {{0.0783333, 0.768667}, 1}, {{0.0866667, 0.768667}, 1}, {{0.0953333, 0.775333}, 1}, {{0.139, 0.775333}, 1}, {{0.147333, 0.756}, 1}, {{0.161333, 0.756}, 1}, {{0.161333, 0.789}, 1}, {{0.142667, 0.789}, 1}, {{0.104, 0.803667}, 1}, {{0.0286667, 0.803667}, 1}, {{0.0196667, 0.794667}, 1}, {{0.0333333, 0.777}, 1}, {{0.0606667, 0.768667}, 1}, {}};
						};
						class Horizont
						{
							clipTL[] = {0, 0.2};
							clipBR[] = {1, 0.75};
							class Dimmed
							{
								class Level0
								{
									type = "line";
									width = 3;
									points[] = {{"Level0", {0.75, 0}, 1}, {"Level0", {0.1, 0}, 1}, {}, {"Level0", {-0.1, 0}, 1}, {"Level0", {-0.75, 0}, 1}};
								};
							};
							class HideOnTurn
							{
								condition = "abs(cameraHeadingDiffX)<=5";
								class Limiter
								{
									class Level0
									{
										type = "line";
										width = 2;
										points[] = {};
									};
									class LevelM5: Level0
									{
										type = "line";
										points[] = {{"LevelM5", {-0.25, 0.03}, 1}, {"LevelM5", {-0.25, 0}, 1}, {"LevelM5", {-0.08, 0}, 1}, {}, {"LevelM5", {0.08, 0}, 1}, {"LevelM5", {0.25, 0}, 1}, {"LevelM5", {0.25, 0.03}, 1}};
									};
									class VALM_1_5
									{
										type = "text";
										source = "static";
										text = -5;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM5", {-0.27, -0.012}, 1};
										right[] = {"LevelM5", {-0.21, -0.012}, 1};
										down[] = {"LevelM5", {-0.27, 0.038}, 1};
									};
									class LevelP5: Level0
									{
										type = "line";
										points[] = {{"LevelP5", {-0.25, -0.03}, 1}, {"LevelP5", {-0.25, 0}, 1}, {"LevelP5", {-0.08, 0}, 1}, {}, {"LevelP5", {0.08, 0}, 1}, {"LevelP5", {0.25, 0}, 1}, {"LevelP5", {0.25, -0.03}, 1}};
									};
									class VALP_1_5
									{
										type = "text";
										source = "static";
										text = "5";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP5", {-0.27, -0.037}, 1};
										right[] = {"LevelP5", {-0.21, -0.037}, 1};
										down[] = {"LevelP5", {-0.27, 0.013}, 1};
									};
									class LevelM10: Level0
									{
										type = "line";
										points[] = {{"LevelM10", {-0.25, 0.03}, 1}, {"LevelM10", {-0.25, 0}, 1}, {"LevelM10", {-0.08, 0}, 1}, {}, {"LevelM10", {0.08, 0}, 1}, {"LevelM10", {0.25, 0}, 1}, {"LevelM10", {0.25, 0.03}, 1}};
									};
									class VALM_1_10
									{
										type = "text";
										source = "static";
										text = -10;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM10", {-0.27, -0.012}, 1};
										right[] = {"LevelM10", {-0.21, -0.012}, 1};
										down[] = {"LevelM10", {-0.27, 0.038}, 1};
									};
									class LevelP10: Level0
									{
										type = "line";
										points[] = {{"LevelP10", {-0.25, -0.03}, 1}, {"LevelP10", {-0.25, 0}, 1}, {"LevelP10", {-0.08, 0}, 1}, {}, {"LevelP10", {0.08, 0}, 1}, {"LevelP10", {0.25, 0}, 1}, {"LevelP10", {0.25, -0.03}, 1}};
									};
									class VALP_1_10
									{
										type = "text";
										source = "static";
										text = "10";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP10", {-0.27, -0.037}, 1};
										right[] = {"LevelP10", {-0.21, -0.037}, 1};
										down[] = {"LevelP10", {-0.27, 0.013}, 1};
									};
									class LevelM15: Level0
									{
										type = "line";
										points[] = {{"LevelM15", {-0.25, 0.03}, 1}, {"LevelM15", {-0.25, 0}, 1}, {"LevelM15", {-0.08, 0}, 1}, {}, {"LevelM15", {0.08, 0}, 1}, {"LevelM15", {0.25, 0}, 1}, {"LevelM15", {0.25, 0.03}, 1}};
									};
									class VALM_1_15
									{
										type = "text";
										source = "static";
										text = -15;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM15", {-0.27, -0.012}, 1};
										right[] = {"LevelM15", {-0.21, -0.012}, 1};
										down[] = {"LevelM15", {-0.27, 0.038}, 1};
									};
									class LevelP15: Level0
									{
										type = "line";
										points[] = {{"LevelP15", {-0.25, -0.03}, 1}, {"LevelP15", {-0.25, 0}, 1}, {"LevelP15", {-0.08, 0}, 1}, {}, {"LevelP15", {0.08, 0}, 1}, {"LevelP15", {0.25, 0}, 1}, {"LevelP15", {0.25, -0.03}, 1}};
									};
									class VALP_1_15
									{
										type = "text";
										source = "static";
										text = "15";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP15", {-0.27, -0.037}, 1};
										right[] = {"LevelP15", {-0.21, -0.037}, 1};
										down[] = {"LevelP15", {-0.27, 0.013}, 1};
									};
									class LevelM20: Level0
									{
										type = "line";
										points[] = {{"LevelM20", {-0.25, 0.03}, 1}, {"LevelM20", {-0.25, 0}, 1}, {"LevelM20", {-0.08, 0}, 1}, {}, {"LevelM20", {0.08, 0}, 1}, {"LevelM20", {0.25, 0}, 1}, {"LevelM20", {0.25, 0.03}, 1}};
									};
									class VALM_1_20
									{
										type = "text";
										source = "static";
										text = -20;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM20", {-0.27, -0.012}, 1};
										right[] = {"LevelM20", {-0.21, -0.012}, 1};
										down[] = {"LevelM20", {-0.27, 0.038}, 1};
									};
									class LevelP20: Level0
									{
										type = "line";
										points[] = {{"LevelP20", {-0.25, -0.03}, 1}, {"LevelP20", {-0.25, 0}, 1}, {"LevelP20", {-0.08, 0}, 1}, {}, {"LevelP20", {0.08, 0}, 1}, {"LevelP20", {0.25, 0}, 1}, {"LevelP20", {0.25, -0.03}, 1}};
									};
									class VALP_1_20
									{
										type = "text";
										source = "static";
										text = "20";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP20", {-0.27, -0.037}, 1};
										right[] = {"LevelP20", {-0.21, -0.037}, 1};
										down[] = {"LevelP20", {-0.27, 0.013}, 1};
									};
									class LevelM25: Level0
									{
										type = "line";
										points[] = {{"LevelM25", {-0.25, 0.03}, 1}, {"LevelM25", {-0.25, 0}, 1}, {"LevelM25", {-0.08, 0}, 1}, {}, {"LevelM25", {0.08, 0}, 1}, {"LevelM25", {0.25, 0}, 1}, {"LevelM25", {0.25, 0.03}, 1}};
									};
									class VALM_1_25
									{
										type = "text";
										source = "static";
										text = -25;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM25", {-0.27, -0.012}, 1};
										right[] = {"LevelM25", {-0.21, -0.012}, 1};
										down[] = {"LevelM25", {-0.27, 0.038}, 1};
									};
									class LevelP25: Level0
									{
										type = "line";
										points[] = {{"LevelP25", {-0.25, -0.03}, 1}, {"LevelP25", {-0.25, 0}, 1}, {"LevelP25", {-0.08, 0}, 1}, {}, {"LevelP25", {0.08, 0}, 1}, {"LevelP25", {0.25, 0}, 1}, {"LevelP25", {0.25, -0.03}, 1}};
									};
									class VALP_1_25
									{
										type = "text";
										source = "static";
										text = "25";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP25", {-0.27, -0.037}, 1};
										right[] = {"LevelP25", {-0.21, -0.037}, 1};
										down[] = {"LevelP25", {-0.27, 0.013}, 1};
									};
									class LevelM30: Level0
									{
										type = "line";
										points[] = {{"LevelM30", {-0.25, 0.03}, 1}, {"LevelM30", {-0.25, 0}, 1}, {"LevelM30", {-0.08, 0}, 1}, {}, {"LevelM30", {0.08, 0}, 1}, {"LevelM30", {0.25, 0}, 1}, {"LevelM30", {0.25, 0.03}, 1}};
									};
									class VALM_1_30
									{
										type = "text";
										source = "static";
										text = -30;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM30", {-0.27, -0.012}, 1};
										right[] = {"LevelM30", {-0.21, -0.012}, 1};
										down[] = {"LevelM30", {-0.27, 0.038}, 1};
									};
									class LevelP30: Level0
									{
										type = "line";
										points[] = {{"LevelP30", {-0.25, -0.03}, 1}, {"LevelP30", {-0.25, 0}, 1}, {"LevelP30", {-0.08, 0}, 1}, {}, {"LevelP30", {0.08, 0}, 1}, {"LevelP30", {0.25, 0}, 1}, {"LevelP30", {0.25, -0.03}, 1}};
									};
									class VALP_1_30
									{
										type = "text";
										source = "static";
										text = "30";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP30", {-0.27, -0.037}, 1};
										right[] = {"LevelP30", {-0.21, -0.037}, 1};
										down[] = {"LevelP30", {-0.27, 0.013}, 1};
									};
									class LevelM35: Level0
									{
										type = "line";
										points[] = {{"LevelM35", {-0.25, 0.03}, 1}, {"LevelM35", {-0.25, 0}, 1}, {"LevelM35", {-0.08, 0}, 1}, {}, {"LevelM35", {0.08, 0}, 1}, {"LevelM35", {0.25, 0}, 1}, {"LevelM35", {0.25, 0.03}, 1}};
									};
									class VALM_1_35
									{
										type = "text";
										source = "static";
										text = -35;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM35", {-0.27, -0.012}, 1};
										right[] = {"LevelM35", {-0.21, -0.012}, 1};
										down[] = {"LevelM35", {-0.27, 0.038}, 1};
									};
									class LevelP35: Level0
									{
										type = "line";
										points[] = {{"LevelP35", {-0.25, -0.03}, 1}, {"LevelP35", {-0.25, 0}, 1}, {"LevelP35", {-0.08, 0}, 1}, {}, {"LevelP35", {0.08, 0}, 1}, {"LevelP35", {0.25, 0}, 1}, {"LevelP35", {0.25, -0.03}, 1}};
									};
									class VALP_1_35
									{
										type = "text";
										source = "static";
										text = "35";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP35", {-0.27, -0.037}, 1};
										right[] = {"LevelP35", {-0.21, -0.037}, 1};
										down[] = {"LevelP35", {-0.27, 0.013}, 1};
									};
									class LevelM40: Level0
									{
										type = "line";
										points[] = {{"LevelM40", {-0.25, 0.03}, 1}, {"LevelM40", {-0.25, 0}, 1}, {"LevelM40", {-0.08, 0}, 1}, {}, {"LevelM40", {0.08, 0}, 1}, {"LevelM40", {0.25, 0}, 1}, {"LevelM40", {0.25, 0.03}, 1}};
									};
									class VALM_1_40
									{
										type = "text";
										source = "static";
										text = -40;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM40", {-0.27, -0.012}, 1};
										right[] = {"LevelM40", {-0.21, -0.012}, 1};
										down[] = {"LevelM40", {-0.27, 0.038}, 1};
									};
									class LevelP40: Level0
									{
										type = "line";
										points[] = {{"LevelP40", {-0.25, -0.03}, 1}, {"LevelP40", {-0.25, 0}, 1}, {"LevelP40", {-0.08, 0}, 1}, {}, {"LevelP40", {0.08, 0}, 1}, {"LevelP40", {0.25, 0}, 1}, {"LevelP40", {0.25, -0.03}, 1}};
									};
									class VALP_1_40
									{
										type = "text";
										source = "static";
										text = "40";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP40", {-0.27, -0.037}, 1};
										right[] = {"LevelP40", {-0.21, -0.037}, 1};
										down[] = {"LevelP40", {-0.27, 0.013}, 1};
									};
									class LevelM45: Level0
									{
										type = "line";
										points[] = {{"LevelM45", {-0.25, 0.03}, 1}, {"LevelM45", {-0.25, 0}, 1}, {"LevelM45", {-0.08, 0}, 1}, {}, {"LevelM45", {0.08, 0}, 1}, {"LevelM45", {0.25, 0}, 1}, {"LevelM45", {0.25, 0.03}, 1}};
									};
									class VALM_1_45
									{
										type = "text";
										source = "static";
										text = -45;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM45", {-0.27, -0.012}, 1};
										right[] = {"LevelM45", {-0.21, -0.012}, 1};
										down[] = {"LevelM45", {-0.27, 0.038}, 1};
									};
									class LevelP45: Level0
									{
										type = "line";
										points[] = {{"LevelP45", {-0.25, -0.03}, 1}, {"LevelP45", {-0.25, 0}, 1}, {"LevelP45", {-0.08, 0}, 1}, {}, {"LevelP45", {0.08, 0}, 1}, {"LevelP45", {0.25, 0}, 1}, {"LevelP45", {0.25, -0.03}, 1}};
									};
									class VALP_1_45
									{
										type = "text";
										source = "static";
										text = "45";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP45", {-0.27, -0.037}, 1};
										right[] = {"LevelP45", {-0.21, -0.037}, 1};
										down[] = {"LevelP45", {-0.27, 0.013}, 1};
									};
									class LevelM50: Level0
									{
										type = "line";
										points[] = {{"LevelM50", {-0.25, 0.03}, 1}, {"LevelM50", {-0.25, 0}, 1}, {"LevelM50", {-0.08, 0}, 1}, {}, {"LevelM50", {0.08, 0}, 1}, {"LevelM50", {0.25, 0}, 1}, {"LevelM50", {0.25, 0.03}, 1}};
									};
									class VALM_1_50
									{
										type = "text";
										source = "static";
										text = -50;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM50", {-0.27, -0.012}, 1};
										right[] = {"LevelM50", {-0.21, -0.012}, 1};
										down[] = {"LevelM50", {-0.27, 0.038}, 1};
									};
									class LevelP50: Level0
									{
										type = "line";
										points[] = {{"LevelP50", {-0.25, -0.03}, 1}, {"LevelP50", {-0.25, 0}, 1}, {"LevelP50", {-0.08, 0}, 1}, {}, {"LevelP50", {0.08, 0}, 1}, {"LevelP50", {0.25, 0}, 1}, {"LevelP50", {0.25, -0.03}, 1}};
									};
									class VALP_1_50
									{
										type = "text";
										source = "static";
										text = "50";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP50", {-0.27, -0.037}, 1};
										right[] = {"LevelP50", {-0.21, -0.037}, 1};
										down[] = {"LevelP50", {-0.27, 0.013}, 1};
									};
									class LevelM55: Level0
									{
										type = "line";
										points[] = {{"LevelM55", {-0.25, 0.03}, 1}, {"LevelM55", {-0.25, 0}, 1}, {"LevelM55", {-0.08, 0}, 1}, {}, {"LevelM55", {0.08, 0}, 1}, {"LevelM55", {0.25, 0}, 1}, {"LevelM55", {0.25, 0.03}, 1}};
									};
									class VALM_1_55
									{
										type = "text";
										source = "static";
										text = -55;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM55", {-0.27, -0.012}, 1};
										right[] = {"LevelM55", {-0.21, -0.012}, 1};
										down[] = {"LevelM55", {-0.27, 0.038}, 1};
									};
									class LevelP55: Level0
									{
										type = "line";
										points[] = {{"LevelP55", {-0.25, -0.03}, 1}, {"LevelP55", {-0.25, 0}, 1}, {"LevelP55", {-0.08, 0}, 1}, {}, {"LevelP55", {0.08, 0}, 1}, {"LevelP55", {0.25, 0}, 1}, {"LevelP55", {0.25, -0.03}, 1}};
									};
									class VALP_1_55
									{
										type = "text";
										source = "static";
										text = "55";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP55", {-0.27, -0.037}, 1};
										right[] = {"LevelP55", {-0.21, -0.037}, 1};
										down[] = {"LevelP55", {-0.27, 0.013}, 1};
									};
									class LevelM60: Level0
									{
										type = "line";
										points[] = {{"LevelM60", {-0.25, 0.03}, 1}, {"LevelM60", {-0.25, 0}, 1}, {"LevelM60", {-0.08, 0}, 1}, {}, {"LevelM60", {0.08, 0}, 1}, {"LevelM60", {0.25, 0}, 1}, {"LevelM60", {0.25, 0.03}, 1}};
									};
									class VALM_1_60
									{
										type = "text";
										source = "static";
										text = -60;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM60", {-0.27, -0.012}, 1};
										right[] = {"LevelM60", {-0.21, -0.012}, 1};
										down[] = {"LevelM60", {-0.27, 0.038}, 1};
									};
									class LevelP60: Level0
									{
										type = "line";
										points[] = {{"LevelP60", {-0.25, -0.03}, 1}, {"LevelP60", {-0.25, 0}, 1}, {"LevelP60", {-0.08, 0}, 1}, {}, {"LevelP60", {0.08, 0}, 1}, {"LevelP60", {0.25, 0}, 1}, {"LevelP60", {0.25, -0.03}, 1}};
									};
									class VALP_1_60
									{
										type = "text";
										source = "static";
										text = "60";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP60", {-0.27, -0.037}, 1};
										right[] = {"LevelP60", {-0.21, -0.037}, 1};
										down[] = {"LevelP60", {-0.27, 0.013}, 1};
									};
									class LevelM65: Level0
									{
										type = "line";
										points[] = {{"LevelM65", {-0.25, 0.03}, 1}, {"LevelM65", {-0.25, 0}, 1}, {"LevelM65", {-0.08, 0}, 1}, {}, {"LevelM65", {0.08, 0}, 1}, {"LevelM65", {0.25, 0}, 1}, {"LevelM65", {0.25, 0.03}, 1}};
									};
									class VALM_1_65
									{
										type = "text";
										source = "static";
										text = -65;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM65", {-0.27, -0.012}, 1};
										right[] = {"LevelM65", {-0.21, -0.012}, 1};
										down[] = {"LevelM65", {-0.27, 0.038}, 1};
									};
									class LevelP65: Level0
									{
										type = "line";
										points[] = {{"LevelP65", {-0.25, -0.03}, 1}, {"LevelP65", {-0.25, 0}, 1}, {"LevelP65", {-0.08, 0}, 1}, {}, {"LevelP65", {0.08, 0}, 1}, {"LevelP65", {0.25, 0}, 1}, {"LevelP65", {0.25, -0.03}, 1}};
									};
									class VALP_1_65
									{
										type = "text";
										source = "static";
										text = "65";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP65", {-0.27, -0.037}, 1};
										right[] = {"LevelP65", {-0.21, -0.037}, 1};
										down[] = {"LevelP65", {-0.27, 0.013}, 1};
									};
									class LevelM70: Level0
									{
										type = "line";
										points[] = {{"LevelM70", {-0.25, 0.03}, 1}, {"LevelM70", {-0.25, 0}, 1}, {"LevelM70", {-0.08, 0}, 1}, {}, {"LevelM70", {0.08, 0}, 1}, {"LevelM70", {0.25, 0}, 1}, {"LevelM70", {0.25, 0.03}, 1}};
									};
									class VALM_1_70
									{
										type = "text";
										source = "static";
										text = -70;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM70", {-0.27, -0.012}, 1};
										right[] = {"LevelM70", {-0.21, -0.012}, 1};
										down[] = {"LevelM70", {-0.27, 0.038}, 1};
									};
									class LevelP70: Level0
									{
										type = "line";
										points[] = {{"LevelP70", {-0.25, -0.03}, 1}, {"LevelP70", {-0.25, 0}, 1}, {"LevelP70", {-0.08, 0}, 1}, {}, {"LevelP70", {0.08, 0}, 1}, {"LevelP70", {0.25, 0}, 1}, {"LevelP70", {0.25, -0.03}, 1}};
									};
									class VALP_1_70
									{
										type = "text";
										source = "static";
										text = "70";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP70", {-0.27, -0.037}, 1};
										right[] = {"LevelP70", {-0.21, -0.037}, 1};
										down[] = {"LevelP70", {-0.27, 0.013}, 1};
									};
									class LevelM75: Level0
									{
										type = "line";
										points[] = {{"LevelM75", {-0.25, 0.03}, 1}, {"LevelM75", {-0.25, 0}, 1}, {"LevelM75", {-0.08, 0}, 1}, {}, {"LevelM75", {0.08, 0}, 1}, {"LevelM75", {0.25, 0}, 1}, {"LevelM75", {0.25, 0.03}, 1}};
									};
									class VALM_1_75
									{
										type = "text";
										source = "static";
										text = -75;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM75", {-0.27, -0.012}, 1};
										right[] = {"LevelM75", {-0.21, -0.012}, 1};
										down[] = {"LevelM75", {-0.27, 0.038}, 1};
									};
									class LevelP75: Level0
									{
										type = "line";
										points[] = {{"LevelP75", {-0.25, -0.03}, 1}, {"LevelP75", {-0.25, 0}, 1}, {"LevelP75", {-0.08, 0}, 1}, {}, {"LevelP75", {0.08, 0}, 1}, {"LevelP75", {0.25, 0}, 1}, {"LevelP75", {0.25, -0.03}, 1}};
									};
									class VALP_1_75
									{
										type = "text";
										source = "static";
										text = "75";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP75", {-0.27, -0.037}, 1};
										right[] = {"LevelP75", {-0.21, -0.037}, 1};
										down[] = {"LevelP75", {-0.27, 0.013}, 1};
									};
									class LevelM80: Level0
									{
										type = "line";
										points[] = {{"LevelM80", {-0.25, 0.03}, 1}, {"LevelM80", {-0.25, 0}, 1}, {"LevelM80", {-0.08, 0}, 1}, {}, {"LevelM80", {0.08, 0}, 1}, {"LevelM80", {0.25, 0}, 1}, {"LevelM80", {0.25, 0.03}, 1}};
									};
									class VALM_1_80
									{
										type = "text";
										source = "static";
										text = -80;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM80", {-0.27, -0.012}, 1};
										right[] = {"LevelM80", {-0.21, -0.012}, 1};
										down[] = {"LevelM80", {-0.27, 0.038}, 1};
									};
									class LevelP80: Level0
									{
										type = "line";
										points[] = {{"LevelP80", {-0.25, -0.03}, 1}, {"LevelP80", {-0.25, 0}, 1}, {"LevelP80", {-0.08, 0}, 1}, {}, {"LevelP80", {0.08, 0}, 1}, {"LevelP80", {0.25, 0}, 1}, {"LevelP80", {0.25, -0.03}, 1}};
									};
									class VALP_1_80
									{
										type = "text";
										source = "static";
										text = "80";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP80", {-0.27, -0.037}, 1};
										right[] = {"LevelP80", {-0.21, -0.037}, 1};
										down[] = {"LevelP80", {-0.27, 0.013}, 1};
									};
									class LevelM85: Level0
									{
										type = "line";
										points[] = {{"LevelM85", {-0.25, 0.03}, 1}, {"LevelM85", {-0.25, 0}, 1}, {"LevelM85", {-0.08, 0}, 1}, {}, {"LevelM85", {0.08, 0}, 1}, {"LevelM85", {0.25, 0}, 1}, {"LevelM85", {0.25, 0.03}, 1}};
									};
									class VALM_1_85
									{
										type = "text";
										source = "static";
										text = -85;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM85", {-0.27, -0.012}, 1};
										right[] = {"LevelM85", {-0.21, -0.012}, 1};
										down[] = {"LevelM85", {-0.27, 0.038}, 1};
									};
									class LevelP85: Level0
									{
										type = "line";
										points[] = {{"LevelP85", {-0.25, -0.03}, 1}, {"LevelP85", {-0.25, 0}, 1}, {"LevelP85", {-0.08, 0}, 1}, {}, {"LevelP85", {0.08, 0}, 1}, {"LevelP85", {0.25, 0}, 1}, {"LevelP85", {0.25, -0.03}, 1}};
									};
									class VALP_1_85
									{
										type = "text";
										source = "static";
										text = "85";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP85", {-0.27, -0.037}, 1};
										right[] = {"LevelP85", {-0.21, -0.037}, 1};
										down[] = {"LevelP85", {-0.27, 0.013}, 1};
									};
									class LevelM90: Level0
									{
										type = "line";
										points[] = {{"LevelM90", {-0.25, 0.03}, 1}, {"LevelM90", {-0.25, 0}, 1}, {"LevelM90", {-0.08, 0}, 1}, {}, {"LevelM90", {0.08, 0}, 1}, {"LevelM90", {0.25, 0}, 1}, {"LevelM90", {0.25, 0.03}, 1}};
									};
									class VALM_1_90
									{
										type = "text";
										source = "static";
										text = -90;
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelM90", {-0.27, -0.012}, 1};
										right[] = {"LevelM90", {-0.21, -0.012}, 1};
										down[] = {"LevelM90", {-0.27, 0.038}, 1};
									};
									class LevelP90: Level0
									{
										type = "line";
										points[] = {{"LevelP90", {-0.25, -0.03}, 1}, {"LevelP90", {-0.25, 0}, 1}, {"LevelP90", {-0.08, 0}, 1}, {}, {"LevelP90", {0.08, 0}, 1}, {"LevelP90", {0.25, 0}, 1}, {"LevelP90", {0.25, -0.03}, 1}};
									};
									class VALP_1_90
									{
										type = "text";
										source = "static";
										text = "90";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP90", {-0.27, -0.037}, 1};
										right[] = {"LevelP90", {-0.21, -0.037}, 1};
										down[] = {"LevelP90", {-0.27, 0.013}, 1};
									};
								};
							};
						};
						class SpeedNumber
						{
							type = "text";
							source = "speed";
							sourceScale = 3.6;
							align = "center";
							scale = 1;
							pos[] = {{0.1, 0.280128}, 1};
							right[] = {{0.14, 0.280128}, 1};
							down[] = {{0.1, 0.309615}, 1};
						};
						class AltNumber: SpeedNumber
						{
							source = "altitudeASL";
							sourceScale = 1;
							pos[] = {{0.9, 0.280128}, 1};
							right[] = {{0.94, 0.280128}, 1};
							down[] = {{0.9, 0.309615}, 1};
						};
						class AltNumberAGLStatic
						{
							type = "text";
							source = "static";
							text = "H";
							align = "left";
							scale = 1;
							pos[] = {{0.87, 0.496368}, 1};
							right[] = {{0.91, 0.496368}, 1};
							down[] = {{0.87, 0.525855}, 1};
						};
						class AltNumberAGL
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.94, 0.496368}, 1};
							right[] = {{0.98, 0.496368}, 1};
							down[] = {{0.94, 0.525855}, 1};
						};
						class CollectiveNumber
						{
							type = "text";
							source = "throttle";
							sourceScale = 100;
							align = "left";
							scale = 1;
							pos[] = {{0.091, 0.7}, 1};
							right[] = {{0.141, 0.7}, 1};
							down[] = {{0.091, 0.735}, 1};
						};
						class CollectiveText
						{
							type = "text";
							source = "static";
							text = "%";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.11-0.009", 0.7}, 1};
							right[] = {{0.146, 0.7}, 1};
							down[] = {{"0.11-0.009", 0.735}, 1};
						};
						class ThrustVectoring
						{
							condition = "1+vtolvectoring";
							class VectorigNumber
							{
								type = "text";
								source = "vtolvectoring";
								sourceScale = 90;
								align = "left";
								scale = 1;
								pos[] = {{0.116, 0.744}, 1};
								right[] = {{0.151, 0.744}, 1};
								down[] = {{0.116, 0.769}, 1};
							};
							class ThrustVectoringText
							{
								type = "text";
								source = "static";
								text = "°";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.132, 0.745}, 1};
								right[] = {{0.167, 0.745}, 1};
								down[] = {{0.132, 0.77}, 1};
							};
							class VectoringArrow
							{
								type = "line";
								width = 3;
								points[] = {{"ThrustVectoringRotation", {0.01, 0}, 1}, {"ThrustVectoringRotation", {0.04, 0}, 1}, {}, {"ThrustVectoringRotation", {0.04, 0.02}, 1}, {"ThrustVectoringRotation", {0.04, -0.02}, 1}, {}};
							};
						};
						class ActiveSensorsOn
						{
							condition = "activeSensorsOn";
							class ThrustVectoringText
							{
								type = "text";
								source = "static";
								text = "RDR ON";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.972, 0.745}, 1};
								right[] = {{1.017, 0.745}, 1};
								down[] = {{0.972, 0.78}, 1};
							};
						};
						class ThrustVectoringAuto
						{
							condition = "-vtolvectoring";
							class VectorigNumber
							{
								type = "text";
								source = "static";
								sourceScale = 1;
								text = "AUTO";
								align = "left";
								scale = 1;
								pos[] = {{0.132, 0.74}, 1};
								right[] = {{0.167, 0.74}, 1};
								down[] = {{0.132, 0.765}, 1};
							};
						};
						class HeadingNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.80-0.302", "0.082-0.043"}, 1};
							right[] = {{"0.84-0.302", "0.082-0.043"}, 1};
							down[] = {{"0.80-0.302", "0.117-0.043"}, 1};
						};
						class HeadingRotationArrow
						{
							condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
							class HeadingArrow
							{
								type = "line";
								width = 3;
								points[] = {{{0.52, 0.08}, 1}, {{0.5, 0.11}, 1}, {{0.48, 0.08}, 1}, {{0.52, 0.08}, 1}, {}};
							};
						};
						class HeadingRotation
						{
							condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
							class HeadingHeadNumber
							{
								type = "text";
								source = "cameraDir";
								sourceScale = 1;
								align = "center";
								scale = 1;
								pos[] = {{"0.80-0.302", "0.082-0.002"}, 1};
								right[] = {{"0.83-0.302", "0.082-0.002"}, 1};
								down[] = {{"0.80-0.302", "0.113-0.002"}, 1};
							};
							class HeadingArrow
							{
								type = "line";
								width = 3;
								points[] = {{{0.478, 0.075}, 1}, {{0.522, 0.075}, 1}, {{0.537, 0.095}, 1}, {{0.522, 0.115}, 1}, {{0.478, 0.115}, 1}, {{0.463, 0.095}, 1}, {{0.478, 0.075}, 1}, {}, {{0.52, 0.175}, 1}, {{0.5, 0.145}, 1}, {{0.48, 0.175}, 1}, {{0.52, 0.175}, 1}, {}};
							};
						};
						class HeadingLeft
						{
							clipTL[] = {0, 0};
							clipBR[] = {0.47, 1};
							class HeadingScale
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								sourceoffset = 0;
								width = 3;
								NeverEatSeaWeed = 1;
								top = 0.15;
								center = 0.5;
								bottom = 0.85;
								lineXleft = 0.139145;
								lineYright = 0.129145;
								lineXleftMajor = 0.139145;
								lineYrightMajor = 0.119145;
								majorLineEach = 2;
								numberEach = 6;
								step = 0.5;
								stepSize = 0.0344828;
								align = "center";
								scale = 1;
								pos[] = {0.2, 0.0663462};
								right[] = {0.26, 0.0663462};
								down[] = {0.2, 0.115491};
							};
						};
						class HeadingCentral: HeadingLeft
						{
							clipTL[] = {0.47, 0};
							clipBR[] = {0.53, 1};
							class HeadingScale: HeadingScale
							{
								NeverEatSeaWeed = 0;
								numberEach = 0;
							};
						};
						class HeadingRight: HeadingLeft
						{
							clipTL[] = {0.53, 0};
							clipBR[] = {1, 1};
							class HeadingScale: HeadingScale
							{
							};
						};
						class HorizonBanking
						{
							type = "line";
							width = 3;
							clipTL[] = {0, 0.1};
							clipBR[] = {1, 0.9};
							points[] = {{"HorizonBankRot", {0, 0.31453}, 1}, {"HorizonBankRot", {0.01, 0.294872}, 1}, {"HorizonBankRot", {-0.01, 0.294872}, 1}, {"HorizonBankRot", {0, 0.31453}, 1}};
						};
						class CoordXNumber
						{
							type = "text";
							source = "coordinateX";
							sourceScale = 0.01;
							sourceLength = 3;
							sourceOffset = -0.5;
							align = "right";
							scale = 1;
							pos[] = {{0.871, 0.876}, 1};
							right[] = {{0.921, 0.876}, 1};
							down[] = {{0.871, 0.911}, 1};
						};
						class CoordYNumber: CoordXNumber
						{
							source = "coordinateY";
							pos[] = {{0.929, 0.876}, 1};
							right[] = {{0.979, 0.876}, 1};
							down[] = {{0.929, 0.911}, 1};
						};
						class Time: CoordXNumber
						{
							source = "time";
							text = "%X";
							align = "left";
							pos[] = {{0.97, 0.849}, 1};
							right[] = {{1.02, 0.849}, 1};
							down[] = {{0.97, 0.884}, 1};
						};
						class LightsGroup
						{
							condition = "lights";
							class LightsText
							{
								type = "text";
								source = "static";
								text = "LIGHT";
								align = "left";
								scale = 1;
								pos[] = {{0.149, 0.961}, 1};
								right[] = {{0.199, 0.961}, 1};
								down[] = {{0.149, 0.996}, 1};
							};
						};
						class CollisionLights
						{
							condition = "collisionlights";
							class CollisionLightsText
							{
								type = "text";
								source = "static";
								text = "COLL";
								align = "left";
								scale = 1;
								pos[] = {{0.309, 0.961}, 1};
								right[] = {{0.359, 0.961}, 1};
								down[] = {{0.309, 0.996}, 1};
							};
						};
						class IncomingMissile
						{
							condition = "incomingmissile";
							blinkingPattern[] = {0.3, 0.3};
							blinkingStartsOn = 1;
							class Text
							{
								type = "text";
								source = "static";
								text = "!INCOMING MISSILE!";
								align = "center";
								scale = 1;
								pos[] = {{0.475, 0.157265}, 1};
								right[] = {{0.535, 0.157265}, 1};
								down[] = {{0.475, 0.20641}, 1};
							};
						};
						class GearGroup
						{
							type = "group";
							condition = "ils";
							class GearText
							{
								type = "text";
								source = "static";
								text = "GEAR";
								align = "center";
								scale = 1;
								pos[] = {{0.5, 0.894444}, 1};
								right[] = {{0.54, 0.894444}, 1};
								down[] = {{0.5, 0.923932}, 1};
							};
						};
						class StallGroup
						{
							type = "group";
							condition = "stall";
							color[] = {1, 0, 0};
							blinkingPattern[] = {0.2, 0.2};
							blinkingStartsOn = 1;
							class StallText
							{
								type = "text";
								source = "static";
								text = "STALL";
								align = "center";
								scale = 1;
								pos[] = {{0.5, 0.25}, 1};
								right[] = {{0.54, 0.25}, 1};
								down[] = {{0.5, 0.29}, 1};
							};
						};
						class ILS
						{
							condition = "ils";
							class Glideslope
							{
								clipTL[] = {0, 0};
								clipBR[] = {1, 1};
								class ILS
								{
									type = "line";
									points[] = {{"ILS_W", {-0.24, 0}, 1}, {"ILS_W", {0.24, 0}, 1}, {}, {"ILS_W", {-0.24, -0.0235897}, 1}, {"ILS_W", {-0.24, 0.0235897}, 1}, {}, {"ILS_W", {-0.12, -0.0176923}, 1}, {"ILS_W", {-0.12, 0.0176923}, 1}, {}, {"ILS_W", {0, -0.0235897}, 1}, {"ILS_W", {0, 0.0235897}, 1}, {}, {"ILS_W", {0.12, -0.0176923}, 1}, {"ILS_W", {0.12, 0.0176923}, 1}, {}, {"ILS_W", {0.24, -0.0235897}, 1}, {"ILS_W", {0.24, 0.0235897}, 1}, {}, {"ILS_H", {0, -0.235897}, 1}, {"ILS_H", {0, 0.235897}, 1}, {}, {"ILS_H", {-0.024, -0.235897}, 1}, {"ILS_H", {0.024, -0.235897}, 1}, {}, {"ILS_H", {-0.018, -0.117949}, 1}, {"ILS_H", {0.018, -0.117949}, 1}, {}, {"ILS_H", {-0.024, 0}, 1}, {"ILS_H", {0.024, 0}, 1}, {}, {"ILS_H", {-0.018, 0.117949}, 1}, {"ILS_H", {0.018, 0.117949}, 1}, {}, {"ILS_H", {-0.024, 0.235897}, 1}, {"ILS_H", {0.024, 0.235897}, 1}};
								};
								class airport
								{
									type = "line";
									points[] = {{"airport1", 1}, {"airport2", 1}, {"airport4", 1}, {"airport3", 1}, {"airport1", 1}};
								};
							};
						};
						class WP
						{
							condition = "wpvalid";
							class WPdist
							{
								type = "text";
								source = "wpdist";
								sourceScale = 0.001;
								sourcePrecision = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.935, 0.810897}, 1};
								right[] = {{0.995, 0.810897}, 1};
								down[] = {{0.935, 0.860043}, 1};
							};
							class WPstatic
							{
								type = "text";
								source = "static";
								text = ">";
								align = "center";
								scale = 2;
								pos[] = {{0.95, 0.810897}, 1};
								right[] = {{0.97, 0.810897}, 1};
								down[] = {{0.95, 0.860043}, 1};
							};
							class WPIndex
							{
								type = "text";
								source = "wpIndex";
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.96, 0.810897}, 1};
								right[] = {{1.02, 0.810897}, 1};
								down[] = {{0.96, 0.860043}, 1};
							};
							class WP
							{
								width = 1;
								type = "line";
								points[] = {{"wppoint", 1, {"HorizonBankRotFull", 0.015, -0.035}, 1}, {"wppoint", 1, {"HorizonBankRotFull", 0, 0}, 1}, {"wppoint", 1, {"HorizonBankRotFull", -0.015, -0.035}, 1}};
							};
						};
						class cmWeapons
						{
							type = "text";
							source = "cmweapon";
							sourceScale = 1;
							align = "right";
							scale = 0.5;
							pos[] = {{0.02, 0.87}, 1};
							right[] = {{0.06, 0.87}, 1};
							down[] = {{0.02, 0.91}, 1};
						};
						class cmAmmo
						{
							type = "text";
							source = "cmammo";
							sourceScale = 1;
							align = "right";
							scale = 0.5;
							pos[] = {{0.02, 0.83}, 1};
							right[] = {{0.06, 0.83}, 1};
							down[] = {{0.02, 0.87}, 1};
						};
						class RadarBoxes
						{
							type = "radartoview";
							pos0[] = {0.5, 0.5};
							pos10[] = {0.734, 0.73};
							width = 2;
							points[] = {{{-0.002, -0.00196581}, 1}, {{0.002, -0.00196581}, 1}, {{0.002, 0.00196581}, 1}, {{-0.002, 0.00196581}, 1}, {{-0.002, -0.00196581}, 1}};
						};
						class TargetDiamond
						{
							class shape
							{
								type = "line";
								width = 4;
								points[] = {{"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}};
							};
						};
						class TargetLocked
						{
							condition = "missilelocked";
							class shape
							{
								type = "line";
								width = 4;
								points[] = {{"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, 0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}};
							};
						};
					};
				};
			};