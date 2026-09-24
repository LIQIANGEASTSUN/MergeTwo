using System;

namespace MiniGame.Kitchen;

[Serializable]
public class MGCookMergeLevelItem
{
	public int row;

	public int column;

	public int materialId;

	public int state = 1;
}
