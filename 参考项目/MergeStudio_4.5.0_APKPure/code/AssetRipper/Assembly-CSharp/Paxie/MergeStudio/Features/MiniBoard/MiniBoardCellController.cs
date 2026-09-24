using System;
using DG.Tweening;
using MergePuzzle;
using NaughtyAttributes;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class MiniBoardCellController : MonoBehaviour
	{
		public static readonly Vector3 NormalScale;

		[BoxGroup("Component")]
		[SerializeField]
		public BoxCollider2D BoxCollider2D;

		[BoxGroup("UI")]
		[SerializeField]
		public SpriteRenderer Background;

		[BoxGroup("UI")]
		[SerializeField]
		public SpriteRenderer DoneableBackground;

		[SerializeField]
		[BoxGroup("UI")]
		public SpriteRenderer SelectIcon;

		[BoxGroup("Animation")]
		[SerializeField]
		public AnimationController AnimationController;

		[BoxGroup("Animation")]
		[SerializeField]
		public AnimationLoop SelectedIconAnimation;

		[BoxGroup("Animation")]
		[SerializeField]
		public AnimationLoop DoneableFadeAnimation;

		[NonSerialized]
		public BaseMiniBoardController _board;

		[NonSerialized]
		public bool _doneable;

		[NonSerialized]
		public MiniBoardCellData _boardCellData;

		[NonSerialized]
		public Sequence _doneableSequence;

		public CellEntity CellEntity { get; set; }

		public bool IsEvenCell { get; set; }

		public void ArrangeSorting(bool moveToFront)
		{
		}

		public void Initialize(BaseMiniBoardController board, CellEntity cellEntity)
		{
		}

		public void ArrangeBackground()
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

		public void DestroyCell()
		{
		}

		public void OnDestroy()
		{
		}
	}
}
