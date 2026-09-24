/* Ghidra 12.1.2 native pseudocode; RVA 0x6132618; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.ResetQueueForAllSecondaryProducerOfPrimary; status ok */

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

long * MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__ResetQueueForAllSecondaryProducerOfPrimary
                 (long param_1,long *param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *unaff_x22;
  long *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  long *plStack_58;
  
  if ((bRam0000000007e24515 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077da9d8);
    func_0x03280a18(PTR_DAT_077da9e0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e24515 = 1;
  }
  plVar15 = *(long **)(param_1 + 0x38);
  puVar18 = unaff_x24;
  if (plVar15 == (long *)0x0) goto LAB_06232ae8;
  lVar12 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 7) * 0x10 + 0x138);
        goto LAB_062326fc;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,7);
LAB_062326fc:
  param_3 = puVar8[1];
  plVar9 = (long *)(*(code *)*puVar8)(plVar15,8);
  if (plVar9 == (long *)0x0) goto LAB_06232ae8;
  lVar12 = *plVar9;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077da9d8) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06232768;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar8 = (undefined8 *)func_0x03256b10(plVar9);
LAB_06232768:
  unaff_x23 = (long *)PTR_DAT_0774e8c8;
  plVar15 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
  puVar6 = PTR_DAT_077da9e0;
  puVar5 = PTR_DAT_0777c248;
  puVar4 = PTR_DAT_07779820;
  puVar18 = PTR_DAT_0774e8e0;
  if (plVar15 != (long *)0x0) {
LAB_062327a4:
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar18) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_062327f0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar8 = (undefined8 *)func_0x03256b10(plVar15);
LAB_062327f0:
    plVar9 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    if (((ulong)plVar9 & 1) == 0) {
      param_1 = 0;
      goto LAB_06232a60;
    }
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0623284c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar8 = (undefined8 *)func_0x03256b10(plVar15);
LAB_0623284c:
    unaff_x22 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    if (unaff_x22 != (long *)0x0) goto code_r0x06232860;
    func_0x03280cac();
    plVar9 = unaff_x22;
    goto LAB_06232adc;
  }
  goto LAB_06232aec;
code_r0x06232860:
  lVar12 = *unaff_x22;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x11) * 0x10 + 0x138);
        goto LAB_062328b0;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0x11;
  puVar8 = (undefined8 *)func_0x03256b10(unaff_x22);
LAB_062328b0:
  lVar12 = (*(code *)*puVar8)(unaff_x22,puVar8[1]);
  if (lVar12 == 0) goto LAB_062327a4;
  lVar12 = *unaff_x22;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x11) * 0x10 + 0x138);
        goto LAB_06232910;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0x11;
  puVar8 = (undefined8 *)func_0x03256b10(unaff_x22);
LAB_06232910:
  plVar9 = (long *)(*(code *)*puVar8)(unaff_x22,puVar8[1]);
  unaff_x22 = plVar9;
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06232970;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar8 = (undefined8 *)func_0x03256b10(plVar9);
LAB_06232970:
    unaff_x22 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    if (param_2 != (long *)0x0) {
      lVar12 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_062329d0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar8 = (undefined8 *)func_0x03256b10(param_2);
LAB_062329d0:
      uVar10 = (*(code *)*puVar8)(param_2,puVar8[1]);
      auVar21._8_8_ = uVar10;
      auVar21._0_8_ = uVar10;
      if (unaff_x22 == (long *)0x0) goto LAB_06232ae4;
      param_3 = 0;
      uVar13 = func_0x055f6a38(unaff_x22);
      if ((uVar13 & 1) != 0) {
        lVar12 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06232a40;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        param_3 = 0;
        puVar8 = (undefined8 *)func_0x03256b10(param_2);
LAB_06232a40:
        uVar10 = (*(code *)*puVar8)(param_2,puVar8[1]);
        MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__ResetQueueFor(param_1,uVar10);
      }
      goto LAB_062327a4;
    }
LAB_06232adc:
    unaff_x22 = plVar9;
    func_0x03280cac();
  }
  auVar21 = func_0x03280cac();
LAB_06232ae4:
  func_0x03280cac(auVar21._0_8_,auVar21._8_8_);
LAB_06232ae8:
  func_0x03280cac();
  unaff_x24 = puVar18;
LAB_06232aec:
  puVar18 = unaff_x24;
  func_0x03280cac();
  while( true ) {
    auVar20 = func_0x03280ca4(param_1);
    uVar10 = auVar20._0_8_;
    iVar11 = (int)param_3;
    if (auVar20._8_4_ != 1) break;
    plVar9 = (long *)func_0x072ce910(uVar10);
    param_1 = *plVar9;
    plVar9 = (long *)func_0x072ce920();
LAB_06232a60:
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x23) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06232ab0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar8 = (undefined8 *)func_0x03256b10(plVar15);
LAB_06232ab0:
      plVar9 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    }
    if (param_1 == 0) {
      return plVar9;
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x23) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06232ba4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    iVar11 = 0;
    puVar8 = (undefined8 *)func_0x03256b10(plVar15);
LAB_06232ba4:
    (*(code *)*puVar8)(plVar15,puVar8[1]);
  }
  func_0x03365958(uVar10);
  func_0x03280ca4(0);
  lVar12 = func_0x02f09514();
  puVar7 = auStack_70;
  auStack_70[0] = 0x6232bc8;
  uStack_60 = uVar10;
  plStack_58 = plVar15;
  if ((bRam0000000007e24516 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da9e8);
    bRam0000000007e24516 = 1;
  }
  if (*(long *)(lVar12 + 0x48) == 0) {
    auVar21 = func_0x03280cac();
    lVar16 = auVar21._0_8_;
    puVar7 = (undefined8 *)auStack_130;
    uStack_b0 = 0x6232c20;
    uStack_88 = 0;
    uStack_80 = 0x7e24000;
    plVar15 = (long *)0x7e24000;
    puStack_a0 = puVar18;
    plStack_98 = unaff_x23;
    plStack_90 = unaff_x22;
    lStack_78 = lVar12;
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
    lStack_a8 = 0;
    uStack_c0 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f4 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    puStack_100 = (undefined *)0x0;
    plVar9 = (long *)func_0x055f7aac(auVar21._8_8_,0);
    if (((ulong)plVar9 & 1) != 0) {
      return plVar9;
    }
    if (*(long *)(lVar16 + 0x48) != 0) {
      plVar9 = (long *)func_0x04fe48b0(*(long *)(lVar16 + 0x48),auVar21._8_8_,&lStack_a8,
                                       *(undefined8 *)PTR_DAT_077da908);
      if (((ulong)plVar9 & 1) == 0) {
        return plVar9;
      }
      if (lStack_a8 != 0) {
        func_0x04f35f90(&uStack_128,lStack_a8,*(undefined8 *)PTR_DAT_077da9f0);
        plVar15 = (long *)PTR_DAT_077daa10;
        puVar4 = PTR_DAT_077daa00;
        unaff_x23 = (long *)PTR_DAT_077da958;
        uStack_d8 = uStack_120;
        uStack_e0 = uStack_128;
        uStack_c8 = uStack_110;
        uStack_d0 = uStack_118;
        uStack_c0 = uStack_108;
LAB_06232d4c:
        uVar13 = func_0x05147e9c(&uStack_e0,*(undefined8 *)puVar4);
        if ((uVar13 & 1) != 0) {
          uStack_e8 = uStack_c8;
          uStack_f0 = uStack_d0;
          func_0x054da790(&uStack_f0,&uStack_f4,&puStack_100,*plVar15);
          puVar18 = puStack_100;
          do {
            if (puVar18 == (undefined *)0x0) {
              func_0x03280cac();
LAB_06232ddc:
              func_0x03280cac();
              goto LAB_06232de0;
            }
            lVar12 = *(long *)(puVar18 + 0x18);
            if (lVar12 == 0) goto LAB_06232ddc;
            if (*(int *)(lVar12 + 0x20) <= iVar11) goto LAB_06232d4c;
            func_0x044a32f8(lVar12,*unaff_x23);
          } while( true );
        }
        func_0x05147fc0(&uStack_e0,*(undefined8 *)PTR_DAT_077da9f8);
        goto LAB_06232db8;
      }
    }
LAB_06232de0:
    auVar20 = func_0x03280cac();
    uVar10 = auVar20._0_8_;
    if (auVar20._8_4_ == 1) {
      plVar9 = (long *)func_0x072ce910(uVar10);
      lVar12 = *plVar9;
      func_0x072ce920();
      func_0x05147fc0(&uStack_e0,*(undefined8 *)PTR_DAT_077da9f8);
      if (lVar12 == 0) {
LAB_06232db8:
        plVar15 = (long *)func_0x0623049c(lVar16);
        return plVar15;
      }
      func_0x03280ca4(lVar12);
    }
    func_0x05147fc0(&uStack_e0,*(undefined8 *)PTR_DAT_077da9f8);
    func_0x03365958(uVar10);
    func_0x03280ca4(0);
    uVar19 = 0x6232e68;
    lVar12 = func_0x02f09514();
  }
  else {
    func_0x04fe2f04(*(long *)(lVar12 + 0x48),*(undefined8 *)PTR_DAT_077da9e8);
    uVar10 = 0x7e24000;
    if ((bRam0000000007e24519 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077da7f0);
      bRam0000000007e24519 = 1;
    }
    uVar19 = 0x62304d0;
    lVar16 = lVar12;
    plVar15 = unaff_x22;
  }
  *(undefined8 *)((long)puVar7 + -0x20) = uVar19;
  *(undefined8 *)((long)puVar7 + -0x18) = 0;
  *(undefined8 *)((long)puVar7 + -0x10) = uVar10;
  *(long *)((long)puVar7 + -8) = lVar16;
  if ((bRam0000000007e2451c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa18);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e2451c = 1;
  }
  lVar16 = *(long *)(lVar12 + 0x48);
  if (lVar16 == 0) {
    return (long *)**(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
  }
  plVar9 = *(long **)(lVar12 + 0x30);
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    lVar17 = *(long *)PTR_DAT_077daa18;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)(lVar17 + 0x20)) {
          lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
          goto LAB_06232f2c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    lVar12 = func_0x03256b10(plVar9);
LAB_06232f2c:
    lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar17);
                    /* WARNING: Could not recover jumptable at 0x06232f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar15 = (long *)(**(code **)(lVar12 + 8))(plVar9,lVar16,lVar12);
    return plVar15;
  }
  auVar21 = func_0x03280cac();
  uVar10 = auVar21._8_8_;
  lVar12 = auVar21._0_8_;
  *(undefined8 *)((long)puVar7 + -0x50) = 0x6232f58;
  *(long **)((long)puVar7 + -0x40) = plVar15;
  *(undefined8 *)((long)puVar7 + -0x38) = 0;
  *(undefined8 *)((long)puVar7 + -0x30) = 0;
  *(long *)((long)puVar7 + -0x28) = lVar16;
  if ((bRam0000000007e2451b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa20);
    bRam0000000007e2451b = 1;
  }
  plVar9 = (long *)func_0x055fde0c(uVar10,0);
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  plVar9 = *(long **)(lVar12 + 0x30);
  if (plVar9 == (long *)0x0) {
    lVar16 = func_0x03280cac();
    puVar5 = PTR_DAT_077daa30;
    puVar4 = PTR_DAT_077daa28;
    *(undefined8 *)((long)puVar7 + -0x90) = 0x6233054;
    *(undefined **)((long)puVar7 + -0x80) = puVar18;
    *(long **)((long)puVar7 + -0x78) = unaff_x23;
    *(long **)((long)puVar7 + -0x70) = plVar15;
    *(undefined8 *)((long)puVar7 + -0x68) = 0;
    *(undefined8 *)((long)puVar7 + -0x60) = uVar10;
    *(long *)((long)puVar7 + -0x58) = lVar12;
    if ((bRam0000000007e2451e & 1) == 0) {
      func_0x03280a18(PTR_DAT_077daa30);
      func_0x03280a18(PTR_DAT_077daa28);
      func_0x03280a18(PTR_DAT_0774ecc0);
      func_0x03280a18(PTR_DAT_0774ecb8);
      bRam0000000007e2451e = 1;
    }
    lVar12 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04fe1fa4(lVar12,*(undefined8 *)puVar5);
    plVar15 = (long *)(lVar16 + 0x48);
    *plVar15 = lVar12;
  }
  else {
    lVar16 = *plVar9;
    lVar17 = *(long *)PTR_DAT_077daa20;
    uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)(lVar17 + 0x20)) {
          lVar16 = lVar16 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
          goto LAB_06233000;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    lVar16 = func_0x03256b10(plVar9);
LAB_06233000:
    lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar17);
    lVar16 = (**(code **)(lVar16 + 8))(plVar9,uVar10,lVar16);
    if (lVar16 == 0) {
      return (long *)0x0;
    }
    plVar15 = (long *)(lVar12 + 0x48);
    *plVar15 = lVar16;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar15;
}

