/* Ghidra 12.1.2 native pseudocode; RVA 0x6132C20; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.LeaveRemainingItems; status ok */

/* WARNING: Possible PIC construction at 0x062330ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06233110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x062330f0) */
/* WARNING: Removing unreachable block (ram,0x06233114) */
/* WARNING: Removing unreachable block (ram,0x06a4bf58) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

undefined1  [16]
MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__LeaveRemainingItems
          (long param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  if ((bRam0000000007e24517 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da9f0);
    func_0x03280a18(PTR_DAT_077da908);
    func_0x03280a18(PTR_DAT_077da9f8);
    func_0x03280a18(PTR_DAT_077daa00);
    func_0x03280a18(PTR_DAT_077daa08);
    func_0x03280a18(PTR_DAT_077daa10);
    func_0x03280a18(PTR_DAT_077da958);
    func_0x03280a18(PTR_DAT_077da910);
    bRam0000000007e24517 = 1;
  }
  lStack_38 = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_90 = 0;
  auVar15 = func_0x055f7aac(param_2,0);
  if ((auVar15._0_8_ & 1) != 0) {
    return auVar15;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    auVar15 = func_0x04fe48b0(*(long *)(param_1 + 0x48),param_2,&lStack_38,
                              *(undefined8 *)PTR_DAT_077da908);
    if ((auVar15._0_8_ & 1) == 0) {
      return auVar15;
    }
    if (lStack_38 != 0) {
      func_0x04f35f90(&uStack_b8,lStack_38,*(undefined8 *)PTR_DAT_077da9f0);
      puVar6 = PTR_DAT_077daa10;
      puVar5 = PTR_DAT_077daa00;
      puVar4 = PTR_DAT_077da958;
      uStack_68 = uStack_b0;
      uStack_70 = uStack_b8;
      uStack_58 = uStack_a0;
      uStack_60 = uStack_a8;
      uStack_50 = uStack_98;
LAB_06232d4c:
      uVar7 = func_0x05147e9c(&uStack_70,*(undefined8 *)puVar5);
      if ((uVar7 & 1) != 0) {
        uStack_78 = uStack_58;
        uStack_80 = uStack_60;
        func_0x054da790(&uStack_80,&uStack_84,&lStack_90,*(undefined8 *)puVar6);
        lVar12 = lStack_90;
        do {
          if (lVar12 == 0) {
            func_0x03280cac();
LAB_06232ddc:
            func_0x03280cac();
            goto LAB_06232de0;
          }
          lVar10 = *(long *)(lVar12 + 0x18);
          if (lVar10 == 0) goto LAB_06232ddc;
          if (*(int *)(lVar10 + 0x20) <= param_3) goto LAB_06232d4c;
          func_0x044a32f8(lVar10,*(undefined8 *)puVar4);
        } while( true );
      }
      func_0x05147fc0(&uStack_70,*(undefined8 *)PTR_DAT_077da9f8);
      goto LAB_06232db8;
    }
  }
LAB_06232de0:
  auVar14 = func_0x03280cac();
  if (auVar14._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(auVar14._0_8_);
    lVar12 = *plVar8;
    func_0x072ce920();
    func_0x05147fc0(&uStack_70,*(undefined8 *)PTR_DAT_077da9f8);
    if (lVar12 == 0) {
LAB_06232db8:
      auVar15 = func_0x0623049c(param_1);
      return auVar15;
    }
    func_0x03280ca4(lVar12);
  }
  func_0x05147fc0(&uStack_70,*(undefined8 *)PTR_DAT_077da9f8);
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  auVar15 = func_0x02f09514();
  uVar9 = auVar15._8_8_;
  if ((bRam0000000007e2451c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa18);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e2451c = 1;
    uVar9 = extraout_x1;
  }
  lVar12 = *(long *)(auVar15._0_8_ + 0x48);
  if (lVar12 == 0) {
    auVar15._0_8_ = **(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    auVar15._8_8_ = uVar9;
    return auVar15;
  }
  plVar8 = *(long **)(auVar15._0_8_ + 0x30);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    lVar13 = *(long *)PTR_DAT_077daa18;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_06232f2c;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    lVar10 = func_0x03256b10(plVar8);
LAB_06232f2c:
    lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x06232f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar15 = (**(code **)(lVar10 + 8))(plVar8,lVar12,lVar10);
    return auVar15;
  }
  auVar15 = func_0x03280cac();
  if ((bRam0000000007e2451b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa20);
    bRam0000000007e2451b = 1;
  }
  auVar16 = func_0x055fde0c(auVar15._8_8_,0);
  if ((auVar16._0_8_ & 1) != 0) {
    return auVar16;
  }
  plVar8 = *(long **)(auVar15._0_8_ + 0x30);
  if (plVar8 == (long *)0x0) {
    lVar12 = func_0x03280cac();
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
    plVar8 = (long *)(lVar12 + 0x48);
    *plVar8 = lVar10;
  }
  else {
    lVar12 = *plVar8;
    lVar10 = *(long *)PTR_DAT_077daa20;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(lVar10 + 0x20)) {
          lVar12 = lVar12 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
          goto LAB_06233000;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    lVar12 = func_0x03256b10(plVar8);
LAB_06233000:
    lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar10);
    auVar17 = (**(code **)(lVar12 + 8))(plVar8,auVar15._8_8_,lVar12);
    lVar10 = auVar17._0_8_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar17._8_8_;
    if (lVar10 == 0) {
      return auVar16 << 0x40;
    }
    plVar8 = (long *)(auVar15._0_8_ + 0x48);
    *plVar8 = lVar10;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  auVar17._8_8_ = lVar10;
  auVar17._0_8_ = plVar8;
  return auVar17;
}

