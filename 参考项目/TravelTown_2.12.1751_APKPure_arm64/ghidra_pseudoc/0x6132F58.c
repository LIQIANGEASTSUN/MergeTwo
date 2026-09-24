/* Ghidra 12.1.2 native pseudocode; RVA 0x6132F58; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.LoadFromJson; status ok */

/* WARNING: Possible PIC construction at 0x062330ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06233110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x062330f0) */
/* WARNING: Removing unreachable block (ram,0x06233114) */
/* WARNING: Removing unreachable block (ram,0x06a4bf58) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

void MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__LoadFromJson
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  if ((bRam0000000007e2451b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa20);
    bRam0000000007e2451b = 1;
  }
  uVar6 = func_0x055fde0c(param_2,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x30);
  if (plVar9 == (long *)0x0) {
    lVar7 = func_0x03280cac();
    puVar5 = PTR_DAT_077daa30;
    puVar4 = PTR_DAT_077daa28;
    if ((bRam0000000007e2451e & 1) == 0) {
      func_0x03280a18(PTR_DAT_077daa30);
      func_0x03280a18(PTR_DAT_077daa28);
      func_0x03280a18(PTR_DAT_0774ecc0);
      func_0x03280a18(PTR_DAT_0774ecb8);
      bRam0000000007e2451e = 1;
    }
    lVar10 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04fe1fa4(lVar10,*(undefined8 *)puVar5);
    plVar9 = (long *)(lVar7 + 0x48);
    *plVar9 = lVar10;
  }
  else {
    lVar7 = *plVar9;
    lVar10 = *(long *)PTR_DAT_077daa20;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
          goto LAB_06233000;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar7 = func_0x03256b10(plVar9);
LAB_06233000:
    lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar10);
    lVar7 = (**(code **)(lVar7 + 8))(plVar9,param_2,lVar7);
    if (lVar7 == 0) {
      return;
    }
    plVar9 = (long *)(param_1 + 0x48);
    *plVar9 = lVar7;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

