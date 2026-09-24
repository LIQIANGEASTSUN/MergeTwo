/* Ghidra 12.1.2 native pseudocode; RVA 0x5F16680; ContextualizedECS.Context.TickContext.get_Entities; status ok */


undefined8 ContextualizedECS_Context_TickContext__get_Entities(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000007e22c70 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0958);
    bRam0000000007e22c70 = 1;
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    puVar1 = (undefined8 *)func_0x03280cac();
    return *puVar1;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_077c0958) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_06016708;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077c0958,0);
LAB_06016708:
                    /* WARNING: Could not recover jumptable at 0x06016718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  return uVar2;
}

