using System;
using Zenject;

namespace Framework.Core.Services
{
	public class ServiceBase : Base, IInitializable, IDisposable
	{
		void IInitializable.Initialize()
		{
		}

		void IDisposable.Dispose()
		{
		}

		public virtual void InitializeService()
		{
		}

		public virtual void DisposeService()
		{
		}
	}
}
