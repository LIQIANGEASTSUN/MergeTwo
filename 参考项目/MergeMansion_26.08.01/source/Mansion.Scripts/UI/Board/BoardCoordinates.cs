using System;
using UnityEngine;

namespace UI.Board
{
	public class BoardCoordinates : MonoBehaviour
	{
		[SerializeField]
		public Transform[] rows;

		[NonSerialized]
		public Transform[][] cells;

		public Transform this[int x, int y] => null;

		public void Awake()
		{
		}
	}
}
