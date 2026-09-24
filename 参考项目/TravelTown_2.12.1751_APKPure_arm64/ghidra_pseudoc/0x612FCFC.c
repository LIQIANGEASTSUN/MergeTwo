/* Ghidra 12.1.2 native pseudocode; RVA 0x612FCFC; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.LoadCache; status ok */

/* WARNING: Possible PIC construction at 0x062330ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06233110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x062330f0) */
/* WARNING: Removing unreachable block (ram,0x06233114) */
/* WARNING: Removing unreachable block (ram,0x06a4bf58) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

void MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__LoadCache(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
  puVar5 = PTR_DAT_077da7f0;
  puVar4 = PTR_DAT_0774e5d8;
  if ((bRam0000000007e2451a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e5d8);
    func_0x03280a18(PTR_DAT_077da7f0);
    bRam0000000007e2451a = 1;
  }
  uVar6 = func_0x06fd9160(*(undefined8 *)puVar5,**(undefined8 **)(*(long *)puVar4 + 0xb8),0);
  if ((bRam0000000007e2451b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa20);
    bRam0000000007e2451b = 1;
  }
  uVar7 = func_0x055fde0c(uVar6,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x30);
  if (plVar10 == (long *)0x0) {
    lVar8 = func_0x03280cac();
    puVar5 = PTR_DAT_077daa30;
    puVar4 = PTR_DAT_077daa28;
    if ((bRam0000000007e2451e & 1) == 0) {
      func_0x03280a18(PTR_DAT_077daa30);
      func_0x03280a18(PTR_DAT_077daa28);
      func_0x03280a18(PTR_DAT_0774ecc0);
      func_0x03280a18(PTR_DAT_0774ecb8);
      bRam0000000007e2451e = 1;
    }
    lVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04fe1fa4(lVar11,*(undefined8 *)puVar5);
    plVar10 = (long *)(lVar8 + 0x48);
    *plVar10 = lVar11;
  }
  else {
    lVar8 = *plVar10;
    lVar11 = *(long *)PTR_DAT_077daa20;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar8 = lVar8 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_06233000;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    lVar8 = func_0x03256b10(plVar10);
LAB_06233000:
    lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar11);
    lVar8 = (**(code **)(lVar8 + 8))(plVar10,uVar6,lVar8);
    if (lVar8 == 0) {
      return;
    }
    plVar10 = (long *)(param_1 + 0x48);
    *plVar10 = lVar8;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

