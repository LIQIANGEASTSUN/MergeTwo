/* Ghidra 12.1.2 native pseudocode; RVA 0x68FBF00; MergeEngine.ECS.Components.Items.CombiningComponent.OnBeforeSerialize; status ok */


/* WARNING: Possible PIC construction at 0x069fbf8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x069fbf90) */
/* WARNING: Removing unreachable block (ram,0x069fbfc0) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x069fbfa0) */
/* WARNING: Removing unreachable block (ram,0x069fbfac) */

void MergeEngine_ECS_Components_Items_CombiningComponent__OnBeforeSerialize(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000007e29897 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826670);
    bRam0000000007e29897 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    auVar5 = func_0x03280cac();
    if ((bRam0000000007e29898 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077cda58);
      bRam0000000007e29898 = 1;
    }
    if (auVar5._8_8_ == 0) {
      return;
    }
    plVar4 = (long *)(auVar5._0_8_ + 0x30);
    *plVar4 = auVar5._8_8_;
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 0x28) + 0x10);
    *plVar4 = *(long *)(param_1 + 0x30);
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

