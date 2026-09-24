/* Ghidra 12.1.2 native pseudocode; RVA 0x6132BC8; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.ResetAllQueues; status ok */

/* WARNING: Possible PIC construction at 0x062304cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x062330ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06233110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x062330f0) */
/* WARNING: Removing unreachable block (ram,0x062304d0) */
/* WARNING: Removing unreachable block (ram,0x062304ec) */
/* WARNING: Removing unreachable block (ram,0x06fd90d0) */
/* WARNING: Removing unreachable block (ram,0x06fd90ec) */
/* WARNING: Removing unreachable block (ram,0x06fd9100) */
/* WARNING: Removing unreachable block (ram,0x06fd911c) */
/* WARNING: Removing unreachable block (ram,0x06fd917c) */
/* WARNING: Removing unreachable block (ram,0x06fd9190) */
/* WARNING: Removing unreachable block (ram,0x06fd9110) */
/* WARNING: Removing unreachable block (ram,0x062304e0) */
/* WARNING: Removing unreachable block (ram,0x06233114) */
/* WARNING: Removing unreachable block (ram,0x06a4bf58) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

undefined1  [16]
MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__ResetAllQueues
          (long param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  undefined8 extraout_x1_01;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  long lVar14;
  undefined *unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = &stack0xffffffffffffffe0;
  if ((bRam0000000007e24516 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da9e8);
    bRam0000000007e24516 = 1;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    auVar18 = func_0x03280cac();
    lVar12 = auVar18._0_8_;
    puVar6 = auStack_e0;
    uStack_60 = 0x6232c20;
    unaff_x22 = (undefined *)0x7e24000;
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
    lStack_58 = 0;
    uStack_70 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a4 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_b0 = 0;
    auVar19 = func_0x055f7aac(auVar18._8_8_,0);
    if ((auVar19._0_8_ & 1) != 0) {
      return auVar19;
    }
    if (*(long *)(lVar12 + 0x48) != 0) {
      auVar18 = func_0x04fe48b0(*(long *)(lVar12 + 0x48),auVar18._8_8_,&lStack_58,
                                *(undefined8 *)PTR_DAT_077da908);
      if ((auVar18._0_8_ & 1) == 0) {
        return auVar18;
      }
      if (lStack_58 != 0) {
        func_0x04f35f90(&uStack_d8,lStack_58,*(undefined8 *)PTR_DAT_077da9f0);
        unaff_x22 = PTR_DAT_077daa10;
        puVar4 = PTR_DAT_077daa00;
        unaff_x23 = PTR_DAT_077da958;
        uStack_88 = uStack_d0;
        uStack_90 = uStack_d8;
        uStack_78 = uStack_c0;
        uStack_80 = uStack_c8;
        uStack_70 = uStack_b8;
LAB_06232d4c:
        uVar7 = func_0x05147e9c(&uStack_90,*(undefined8 *)puVar4);
        if ((uVar7 & 1) != 0) {
          uStack_98 = uStack_78;
          uStack_a0 = uStack_80;
          func_0x054da790(&uStack_a0,&uStack_a4,&lStack_b0,*(undefined8 *)unaff_x22);
          unaff_x24 = lStack_b0;
          do {
            if (unaff_x24 == 0) {
              func_0x03280cac();
LAB_06232ddc:
              func_0x03280cac();
              goto LAB_06232de0;
            }
            lVar10 = *(long *)(unaff_x24 + 0x18);
            if (lVar10 == 0) goto LAB_06232ddc;
            if (*(int *)(lVar10 + 0x20) <= param_3) goto LAB_06232d4c;
            func_0x044a32f8(lVar10,*(undefined8 *)unaff_x23);
          } while( true );
        }
        func_0x05147fc0(&uStack_90,*(undefined8 *)PTR_DAT_077da9f8);
        goto LAB_06232db8;
      }
    }
LAB_06232de0:
    auVar16 = func_0x03280cac();
    uVar13 = auVar16._0_8_;
    if (auVar16._8_4_ == 1) {
      plVar8 = (long *)func_0x072ce910(uVar13);
      lVar10 = *plVar8;
      func_0x072ce920();
      func_0x05147fc0(&uStack_90,*(undefined8 *)PTR_DAT_077da9f8);
      if (lVar10 == 0) {
LAB_06232db8:
        auVar18 = func_0x0623049c(lVar12);
        return auVar18;
      }
      func_0x03280ca4(lVar10);
    }
    unaff_x21 = 0;
    func_0x05147fc0(&uStack_90,*(undefined8 *)PTR_DAT_077da9f8);
    func_0x03365958(uVar13);
    func_0x03280ca4(0);
    uVar15 = 0x6232e68;
    auVar18 = func_0x02f09514();
    uVar9 = auVar18._8_8_;
    param_1 = auVar18._0_8_;
  }
  else {
    func_0x04fe2f04(*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_077da9e8);
    uVar13 = 0x7e24000;
    uVar9 = extraout_x1_00;
    if ((bRam0000000007e24519 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077da7f0);
      bRam0000000007e24519 = 1;
      uVar9 = extraout_x1;
    }
    uVar15 = 0x62304d0;
    lVar12 = param_1;
  }
  *(undefined8 *)(puVar6 + -0x20) = uVar15;
  *(undefined8 *)(puVar6 + -0x18) = unaff_x21;
  *(undefined8 *)(puVar6 + -0x10) = uVar13;
  *(long *)(puVar6 + -8) = lVar12;
  if ((bRam0000000007e2451c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa18);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e2451c = 1;
    uVar9 = extraout_x1_01;
  }
  lVar12 = *(long *)(param_1 + 0x48);
  if (lVar12 == 0) {
    auVar18._0_8_ = **(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    auVar18._8_8_ = uVar9;
    return auVar18;
  }
  plVar8 = *(long **)(param_1 + 0x30);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    lVar14 = *(long *)PTR_DAT_077daa18;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_06232f2c;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    lVar10 = func_0x03256b10(plVar8);
LAB_06232f2c:
    lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar14);
                    /* WARNING: Could not recover jumptable at 0x06232f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar18 = (**(code **)(lVar10 + 8))(plVar8,lVar12,lVar10);
    return auVar18;
  }
  auVar18 = func_0x03280cac();
  uVar13 = auVar18._8_8_;
  lVar10 = auVar18._0_8_;
  *(undefined8 *)(puVar6 + -0x50) = 0x6232f58;
  *(undefined **)(puVar6 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar6 + -0x30) = 0;
  *(long *)(puVar6 + -0x28) = lVar12;
  if ((bRam0000000007e2451b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa20);
    bRam0000000007e2451b = 1;
  }
  auVar18 = func_0x055fde0c(uVar13,0);
  if ((auVar18._0_8_ & 1) != 0) {
    return auVar18;
  }
  plVar8 = *(long **)(lVar10 + 0x30);
  if (plVar8 == (long *)0x0) {
    lVar12 = func_0x03280cac();
    puVar5 = PTR_DAT_077daa30;
    puVar4 = PTR_DAT_077daa28;
    *(undefined8 *)(puVar6 + -0x90) = 0x6233054;
    *(long *)(puVar6 + -0x80) = unaff_x24;
    *(undefined **)(puVar6 + -0x78) = unaff_x23;
    *(undefined **)(puVar6 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x68) = 0;
    *(undefined8 *)(puVar6 + -0x60) = uVar13;
    *(long *)(puVar6 + -0x58) = lVar10;
    if ((bRam0000000007e2451e & 1) == 0) {
      func_0x03280a18(PTR_DAT_077daa30);
      func_0x03280a18(PTR_DAT_077daa28);
      func_0x03280a18(PTR_DAT_0774ecc0);
      func_0x03280a18(PTR_DAT_0774ecb8);
      bRam0000000007e2451e = 1;
    }
    lVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04fe1fa4(lVar14,*(undefined8 *)puVar5);
    plVar8 = (long *)(lVar12 + 0x48);
    *plVar8 = lVar14;
  }
  else {
    lVar12 = *plVar8;
    lVar14 = *(long *)PTR_DAT_077daa20;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar12 = lVar12 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_06233000;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    lVar12 = func_0x03256b10(plVar8);
LAB_06233000:
    lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar14);
    auVar18 = (**(code **)(lVar12 + 8))(plVar8,uVar13,lVar12);
    lVar14 = auVar18._0_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auVar18._8_8_;
    if (lVar14 == 0) {
      return auVar19 << 0x40;
    }
    plVar8 = (long *)(lVar10 + 0x48);
    *plVar8 = lVar14;
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
  auVar17._8_8_ = lVar14;
  auVar17._0_8_ = plVar8;
  return auVar17;
}

