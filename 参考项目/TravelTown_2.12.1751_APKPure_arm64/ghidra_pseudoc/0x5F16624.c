/* Ghidra 12.1.2 native pseudocode; RVA 0x5F16624; ContextualizedECS.Context.TickArgs.HasArguments; status ok */


ulong ContextualizedECS_Context_TickArgs__HasArguments(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000007e22c6c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c3b80);
    bRam0000000007e22c6c = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x04fe2a4c(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_077c3b80);
    return (ulong)(0 < iVar1);
  }
  puVar2 = (undefined8 *)func_0x03280cac();
  if ((bRam0000000007e22c70 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0958);
    bRam0000000007e22c70 = 1;
  }
  plVar7 = (long *)*puVar2;
  if (plVar7 == (long *)0x0) {
    puVar3 = (ulong *)func_0x03280cac();
    return *puVar3;
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_077c0958) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06016708;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077c0958,0);
LAB_06016708:
                    /* WARNING: Could not recover jumptable at 0x06016718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  return uVar5;
}

