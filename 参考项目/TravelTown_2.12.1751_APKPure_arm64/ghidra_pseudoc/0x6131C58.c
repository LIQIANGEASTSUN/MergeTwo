/* Ghidra 12.1.2 native pseudocode; RVA 0x6131C58; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.OnProducerQueueUpdated; status ok */

/* WARNING: Possible PIC construction at 0x06231e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06231e38) */
/* WARNING: Removing unreachable block (ram,0x06231e60) */

void MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__OnProducerQueueUpdated
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lStack_50;
  long lStack_48;
  
  if ((bRam0000000007e24510 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077da900);
    func_0x03280a18(PTR_DAT_077da908);
    func_0x03280a18(PTR_DAT_077da960);
    func_0x03280a18(PTR_DAT_077da800);
    func_0x03280a18(PTR_DAT_077da808);
    func_0x03280a18(PTR_DAT_077da968);
    func_0x03280a18(PTR_DAT_077da970);
    func_0x03280a18(PTR_DAT_0774ecc8);
    func_0x03280a18(PTR_DAT_07763de8);
    func_0x03280a18(PTR_DAT_077da978);
    func_0x03280a18(PTR_DAT_077da910);
    func_0x03280a18(PTR_DAT_077da890);
    func_0x03280a18(PTR_DAT_077da980);
    func_0x03280a18(PTR_DAT_077da988);
    func_0x03280a18(PTR_DAT_077da990);
    func_0x03280a18(PTR_DAT_077da998);
    func_0x03280a18(PTR_DAT_077da9a0);
    func_0x03280a18(PTR_DAT_077da9a8);
    func_0x03280a18(PTR_DAT_07756328);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e24510 = 1;
  }
  lStack_50 = 0;
  lStack_48 = 0;
  if (param_2 == 0) {
    uVar12 = func_0x055f7aac(0,0);
    if ((uVar12 & 1) == 0) goto LAB_06232194;
  }
  else {
    uVar12 = func_0x055f7aac(*(undefined8 *)(param_2 + 0x10),0);
    if ((uVar12 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_06232194;
      uVar12 = func_0x04fe48b0(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x10),&lStack_48,
                               *(undefined8 *)PTR_DAT_077da908);
      if ((uVar12 & 1) == 0) {
        lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da970);
        func_0x04f34d5c(lVar13,*(undefined8 *)PTR_DAT_077da960);
        func_0x06232354(param_1,*(undefined8 *)(param_2 + 0x10),lVar13,param_2);
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (func_0x04fe2d68(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x10),lVar13,
                            *(undefined8 *)PTR_DAT_077da968), lVar13 == 0)) goto LAB_06232194;
        uVar2 = *(undefined4 *)(param_2 + 0x28);
LAB_0623205c:
        lVar13 = func_0x04f35ab8(lVar13,uVar2,*(undefined8 *)PTR_DAT_077da800);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) goto LAB_06232194;
      }
      else {
        if (lStack_48 == 0) {
          lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da970);
          func_0x04f34d5c(lVar13,*(undefined8 *)PTR_DAT_077da960);
          lStack_48 = lVar13;
          if (lVar13 == 0) goto LAB_06232194;
        }
        uVar12 = func_0x04f37608(lStack_48,*(undefined4 *)(param_2 + 0x28),&lStack_50,
                                 *(undefined8 *)PTR_DAT_077da900);
        if ((uVar12 & 1) == 0) {
          func_0x06232354(param_1,*(undefined8 *)(param_2 + 0x10),lStack_48,param_2);
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar13 = func_0x04fe2cfc(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x10),
                                       *(undefined8 *)PTR_DAT_077da808), lVar13 == 0))
          goto LAB_06232194;
          uVar2 = *(undefined4 *)(param_2 + 0x28);
          goto LAB_0623205c;
        }
        if (lStack_50 == 0) {
          func_0x03280ca0(*(undefined8 *)PTR_DAT_077da988);
          return;
        }
        uVar12 = func_0x055f7aac(*(undefined8 *)(param_2 + 0x18),0);
        if ((uVar12 & 1) == 0) {
          if (lStack_50 == 0) goto LAB_06232194;
          uVar12 = func_0x055f7aac(*(undefined8 *)(lStack_50 + 0x10),0);
          if ((uVar12 & 1) == 0) {
            if ((lStack_50 == 0) || (*(long *)(lStack_50 + 0x10) == 0)) goto LAB_06232194;
            uVar12 = func_0x055f6a38(*(long *)(lStack_50 + 0x10),*(undefined8 *)(param_2 + 0x18),0);
            if ((uVar12 & 1) != 0) goto LAB_06231edc;
          }
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_06232194;
          uVar12 = func_0x041447fc(*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x18),
                                   *(undefined8 *)PTR_DAT_07763de8);
          if ((uVar12 & 1) != 0) goto LAB_06231edc;
          if (lStack_50 == 0) goto LAB_06232194;
          *(undefined8 *)(lStack_50 + 0x10) = *(undefined8 *)(param_2 + 0x18);
          func_0x032809c4();
          lVar13 = *(long *)(param_1 + 0x50);
          if (lVar13 == 0) goto LAB_06232194;
          uVar16 = *(undefined8 *)(param_2 + 0x18);
          lVar17 = *(long *)(lVar13 + 0x10);
          lVar19 = *(long *)PTR_DAT_0774ecc8;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_06232194;
          uVar4 = *(uint *)(lVar13 + 0x18);
          if (uVar4 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar4 + 1;
            puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
            *puVar18 = uVar16;
            func_0x032809c4(puVar18);
          }
          else {
            func_0x0414446c(lVar13,uVar16,
                            *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          if (lStack_50 == 0) goto LAB_06232194;
          func_0x062321a0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x28),
                          *(undefined8 *)(lStack_50 + 0x10),*(undefined8 *)(lStack_50 + 0x18),
                          *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x30));
          bVar5 = true;
        }
        else {
LAB_06231edc:
          bVar5 = false;
        }
        if ((lStack_50 == 0) || (lVar13 = *(long *)(lStack_50 + 0x18), lVar13 == 0))
        goto LAB_06232194;
        if (!bVar5) {
          return;
        }
      }
      uVar2 = *(undefined4 *)(lVar13 + 0x20);
      lVar13 = *(long *)(param_1 + 0x20);
      uVar3 = *(undefined4 *)(param_2 + 0x28);
      uVar16 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da980);
      func_0x068c4988(uVar15,uVar16,uVar3,uVar1,uVar2,0);
      if (lVar13 != 0) {
        func_0x03ea4d6c(lVar13,uVar15,*(undefined8 *)PTR_DAT_077da990);
        func_0x0623049c(param_1);
        return;
      }
      goto LAB_06232194;
    }
  }
  plVar14 = (long *)func_0x057dadc4(param_1,0);
  puVar11 = PTR_DAT_077da9a8;
  puVar10 = PTR_DAT_077da9a0;
  puVar9 = PTR_DAT_077da998;
  puVar8 = PTR_DAT_0776dcd8;
  puVar7 = PTR_DAT_07756328;
  puVar6 = PTR_DAT_077503b8;
  if (plVar14 != (long *)0x0) {
    uVar16 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    uVar16 = func_0x055f7538(*(undefined8 *)puVar7,uVar16,*(undefined8 *)puVar10,0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar8);
    }
    func_0x0556c434(uVar16,*(undefined8 *)puVar6,0,*(undefined8 *)puVar9,*(undefined8 *)puVar11,0,0)
    ;
    return;
  }
LAB_06232194:
  func_0x03280cac();
  return;
}

