using System;
using Zenject;

namespace Framework.Core.MVVM.Model
{
	public class ModelBase : Base, IInitializable, IDisposable
	{
		void IInitializable.Initialize()
		{
		}

		void IDisposable.Dispose()
		{
		}

		public virtual void InitializeModel()
		{
		}

		public virtual void DisposeModel()
		{
		}
	}
}
