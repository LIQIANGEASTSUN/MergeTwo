/* Ghidra 12.1.2 native pseudocode; RVA 0x6280B60; MergeEngine.ECS.Systems.InventorySystem.IsProducerTabEnabled; status ok */

ulong MergeEngine_ECS_Systems_InventorySystem__IsProducerTabEnabled(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((bRam0000000007e254c6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6f60);
    func_0x03280a18(PTR_DAT_077d9fb8);
    func_0x03280a18(PTR_DAT_077e6f68);
    func_0x03280a18(PTR_DAT_07773068);
    func_0x03280a18(PTR_DAT_077e6f70);
    bRam0000000007e254c6 = 1;
  }
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar3 == 0)) goto LAB_06380c6c;
  if (*(int *)(lVar3 + 0x18) < 1) {
    uVar2 = func_0x06380d70(param_1);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_06380c6c;
      if (*(char *)(*(long *)(param_1 + 0x48) + 0x28) != '\0') {
        lVar3 = *(long *)(param_1 + 0xd8);
        if (lVar3 == 0) {
LAB_06380c6c:
          lVar3 = func_0x03280cac();
          return *(ulong *)(lVar3 + 0xf0);
        }
        if (0 < *(int *)(lVar3 + 0x18)) {
          lVar3 = func_0x0414419c(lVar3,0,*(undefined8 *)PTR_DAT_077e6f68);
          if ((lVar3 != 0) && (plVar4 = *(long **)(param_1 + 0x78), plVar4 != (long *)0x0)) {
            iVar1 = *(int *)(lVar3 + 0x18);
            lVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
            if (lVar3 != 0) {
              return (ulong)(iVar1 <= *(int *)(lVar3 + 0x20));
            }
          }
          goto LAB_06380c6c;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

