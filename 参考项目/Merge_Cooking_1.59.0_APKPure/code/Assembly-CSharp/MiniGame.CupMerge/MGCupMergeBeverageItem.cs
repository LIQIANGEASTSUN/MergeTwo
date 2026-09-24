using System;

namespace MiniGame.CupMerge;

[Serializable]
public class MGCupMergeBeverageItem
{
	public int id;

	public int beverageLevel;

	public int type;

	public string name;

	public string icon;

	public float nextScale;

	public float displayScale;

	public float orderScale;
}
