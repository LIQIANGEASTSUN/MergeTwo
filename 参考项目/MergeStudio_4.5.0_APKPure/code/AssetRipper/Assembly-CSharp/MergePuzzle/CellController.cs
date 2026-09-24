using System;
using DG.Tweening;
using NaughtyAttributes;
using Paxie;
using UnityEngine;
using UnityEngine.Rendering;

namespace MergePuzzle
{
	public class CellController : MonoBehaviour, ITutorialSetSorting
	{
		public static readonly Vector3 NormalScale;

		public static readonly Vector3 CustomTutorialScale;

		[BoxGroup("Data")]
		[SerializeField]
		public BoardCellData DefaultBoardCellData;

		[BoxGroup("Component")]
		[SerializeField]
		public BoxCollider2D BoxCollider2D;

		[SerializeField]
		[BoxGroup("Component")]
		public SortingGroup SortingGroup;

		[SerializeField]
		[BoxGroup("UI")]
		public SpriteRenderer Background;

		[BoxGroup("UI")]
		[SerializeField]
		public SpriteRenderer SelectIcon;

		[BoxGroup("UI")]
		[SerializeField]
		public SpriteRenderer DoneableBackground;

		[SerializeField]
		[BoxGroup("Animation")]
		public AnimationController AnimationController;

		[BoxGroup("Animation")]
		[SerializeField]
		public AnimationLoop SelectedIconAnimation;

		[SerializeField]
		[BoxGroup("Animation")]
		public AnimationLoop DoneableFadeAnimation;

		[NonSerialized]
		public BoardController _board;

		[NonSerialized]
		public bool _doneable;

		[NonSerialized]
		public BoardCellData _boardCellData;

		[NonSerialized]
		public Sequence _doneableSequence;

		public CellEntity CellEntity { get; set; }

		public SortingData SortingData { get; set; }

		public bool IsEvenCell { get; set; }

		public void SetTutorialSortingData(SortingData sortingData)
		{
		}

		public SortingData GetTutorialSortingData()
		{
			return null;
		}

		public void SetSortingData(SortingData sortingData)
		{
		}

		public void ArrangeSorting(bool moveToFront)
		{
		}

		public void Initialize(BoardController board, CellEntity cellEntity)
		{
		}

		public void ArrangeBackground(bool customTutorialEnabled)
		{
		}

		public void Deselect()
		{
		}

		public void Select()
		{
		}

		public void SelectWithAnimation()
		{
		}

		public void ArrangeSelectedImage(bool isActive)
		{
		}

		public void DisableTrigger(bool disabled)
		{
		}

		public void SetDoneableBackground(bool enable)
		{
		}

		public void DisableDoneableBackground()
		{
		}

		public void EnableDoneableBackground()
		{
		}

		public Tween DODoneableBackground(bool fadeIn)
		{
			return null;
		}

		public Vector3 GetCornerPosition(Transform referenceTransform)
		{
			return default(Vector3);
		}

		public Vector3 GetCornerPosition(Transform referenceTransform, float coef)
		{
			return default(Vector3);
		}

		public void ArrangeSortingJelly()
		{
		}

		public void RestoreSorting()
		{
		}

		public void StartMergeHintSorting(int offset)
		{
		}

		public bool IsTutorialActive()
		{
			return false;
		}

		public bool IsStepOneTransition()
		{
			return false;
		}

		public void OnDestroy()
		{
		}
	}
}
