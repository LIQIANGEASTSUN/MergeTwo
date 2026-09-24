/* Ghidra 12.1.2 native pseudocode; RVA 0x6132504; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.ResetQueueFor; status ok */

/* WARNING: Possible PIC construction at 0x062325d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x062325fc: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x062325d8) */
/* WARNING: Removing unreachable block (ram,0x062325e0) */
/* WARNING: Removing unreachable block (ram,0x062325e8) */
/* WARNING: Removing unreachable block (ram,0x06233114) */
/* WARNING: Removing unreachable block (ram,0x06a4bf58) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

long * MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__ResetQueueFor
                 (long *param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar22;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined1 auStack_40 [8];
  long lStack_38;
  long lStack_28;
  
  puVar7 = (undefined8 *)auStack_40;
  plVar21 = (long *)0x7e24000;
  uVar18 = (ulong)param_3 & 0xffffffff;
  if ((bRam0000000007e24513 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da900);
    func_0x03280a18(PTR_DAT_077da908);
    func_0x03280a18(PTR_DAT_077da9d0);
    bRam0000000007e24513 = 1;
  }
  lStack_28 = 0;
  lStack_38 = 0;
  plVar9 = (long *)func_0x055f7aac(param_2,0);
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  puVar22 = unaff_x24;
  if (param_1[9] == 0) {
LAB_06232614:
    auVar25 = func_0x03280cac();
    plVar9 = auVar25._8_8_;
    lVar19 = auVar25._0_8_;
    uStack_90 = 0x6232618;
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
    plVar17 = *(long **)(lVar19 + 0x38);
    if (plVar17 == (long *)0x0) {
LAB_06232ae8:
      func_0x03280cac();
      unaff_x24 = puVar22;
    }
    else {
      lVar15 = *plVar17;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar16 + 7) * 0x10 + 0x138);
            goto LAB_062326fc;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777a498,7);
LAB_062326fc:
      param_3 = (long *)puVar11[1];
      plVar12 = (long *)(*(code *)*puVar11)(plVar17,8);
      if (plVar12 == (long *)0x0) goto LAB_06232ae8;
      lVar15 = *plVar12;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077da9d8) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06232768;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      param_3 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06232768:
      unaff_x23 = (long *)PTR_DAT_0774e8c8;
      plVar17 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
      puVar6 = PTR_DAT_077da9e0;
      puVar5 = PTR_DAT_0777c248;
      puVar4 = PTR_DAT_07779820;
      puVar22 = PTR_DAT_0774e8e0;
      if (plVar17 != (long *)0x0) {
LAB_062327a4:
        lVar15 = *plVar17;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar22) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_062327f0;
            }
            uVar18 = uVar18 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar18 != 0);
        }
        param_3 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_062327f0:
        plVar12 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
        if (((ulong)plVar12 & 1) == 0) {
          lVar19 = 0;
          goto LAB_06232a60;
        }
        lVar15 = *plVar17;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0623284c;
            }
            uVar18 = uVar18 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar18 != 0);
        }
        param_3 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_0623284c:
        plVar21 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
        if (plVar21 != (long *)0x0) goto code_r0x06232860;
        func_0x03280cac();
        plVar12 = plVar21;
        goto LAB_06232adc;
      }
    }
    puVar22 = unaff_x24;
    func_0x03280cac();
    while( true ) {
      auVar24 = func_0x03280ca4(lVar19);
      uVar18 = auVar24._0_8_;
      iVar14 = (int)param_3;
      if (auVar24._8_4_ != 1) break;
      plVar9 = (long *)func_0x072ce910(uVar18);
      lVar19 = *plVar9;
      plVar12 = (long *)func_0x072ce920();
LAB_06232a60:
      if (plVar17 != (long *)0x0) {
        lVar15 = *plVar17;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x23) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06232ab0;
            }
            uVar18 = uVar18 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar18 != 0);
        }
        param_3 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_06232ab0:
        plVar12 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
      }
      if (lVar19 == 0) {
        return plVar12;
      }
    }
    param_2 = 0;
    if (plVar17 != (long *)0x0) {
      lVar19 = *plVar17;
      uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x23) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06232ba4;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      iVar14 = 0;
      puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_06232ba4:
      (*(code *)*puVar11)(plVar17,puVar11[1]);
    }
    func_0x03365958(uVar18);
    func_0x03280ca4(0);
    param_1 = (long *)func_0x02f09514();
    uStack_b0 = 0x6232bc8;
    uStack_a0 = uVar18;
    plStack_98 = plVar17;
    if ((bRam0000000007e24516 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077da9e8);
      bRam0000000007e24516 = 1;
    }
    if (param_1[9] != 0) {
      func_0x04fe2f04(param_1[9],*(undefined8 *)PTR_DAT_077da9e8);
      puVar7 = &uStack_90;
      plVar17 = plStack_98;
      uVar18 = uStack_a0;
      plVar9 = plVar21;
      uVar13 = uStack_b0;
      goto SUB_0623049c;
    }
    auVar25 = func_0x03280cac();
    plVar17 = auVar25._0_8_;
    puVar8 = auStack_170;
    uStack_f0 = 0x6232c20;
    uStack_c8 = 0;
    uStack_c0 = 0x7e24000;
    plVar9 = (long *)0x7e24000;
    puStack_e0 = puVar22;
    plStack_d8 = unaff_x23;
    plStack_d0 = plVar21;
    plStack_b8 = param_1;
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
    lStack_e8 = 0;
    uStack_100 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_134 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puStack_140 = (undefined *)0x0;
    plVar21 = (long *)func_0x055f7aac(auVar25._8_8_,0);
    if (((ulong)plVar21 & 1) != 0) {
      return plVar21;
    }
    if (plVar17[9] != 0) {
      plVar21 = (long *)func_0x04fe48b0(plVar17[9],auVar25._8_8_,&lStack_e8,
                                        *(undefined8 *)PTR_DAT_077da908);
      if (((ulong)plVar21 & 1) == 0) {
        return plVar21;
      }
      if (lStack_e8 != 0) {
        func_0x04f35f90(&uStack_168,lStack_e8,*(undefined8 *)PTR_DAT_077da9f0);
        plVar9 = (long *)PTR_DAT_077daa10;
        puVar4 = PTR_DAT_077daa00;
        unaff_x23 = (long *)PTR_DAT_077da958;
        uStack_118 = uStack_160;
        uStack_120 = uStack_168;
        uStack_108 = uStack_150;
        uStack_110 = uStack_158;
        uStack_100 = uStack_148;
LAB_06232d4c:
        uVar18 = func_0x05147e9c(&uStack_120,*(undefined8 *)puVar4);
        if ((uVar18 & 1) != 0) {
          uStack_128 = uStack_108;
          uStack_130 = uStack_110;
          func_0x054da790(&uStack_130,&uStack_134,&puStack_140,*plVar9);
          puVar22 = puStack_140;
          do {
            if (puVar22 == (undefined *)0x0) {
              func_0x03280cac();
LAB_06232ddc:
              func_0x03280cac();
              goto LAB_06232de0;
            }
            lVar19 = *(long *)(puVar22 + 0x18);
            if (lVar19 == 0) goto LAB_06232ddc;
            if (*(int *)(lVar19 + 0x20) <= iVar14) goto LAB_06232d4c;
            func_0x044a32f8(lVar19,*unaff_x23);
          } while( true );
        }
        func_0x05147fc0(&uStack_120,*(undefined8 *)PTR_DAT_077da9f8);
        goto LAB_06232db8;
      }
    }
LAB_06232de0:
    auVar24 = func_0x03280cac();
    uVar13 = auVar24._0_8_;
    if (auVar24._8_4_ == 1) {
      plVar21 = (long *)func_0x072ce910(uVar13);
      lVar19 = *plVar21;
      func_0x072ce920();
      func_0x05147fc0(&uStack_120,*(undefined8 *)PTR_DAT_077da9f8);
      if (lVar19 == 0) {
LAB_06232db8:
        plVar21 = (long *)func_0x0623049c(plVar17);
        return plVar21;
      }
      func_0x03280ca4(lVar19);
    }
    param_2 = 0;
    func_0x05147fc0(&uStack_120,*(undefined8 *)PTR_DAT_077da9f8);
    func_0x03365958(uVar13);
    func_0x03280ca4(0);
    uVar23 = 0x6232e68;
    param_1 = (long *)func_0x02f09514();
  }
  else {
    param_3 = &lStack_28;
    plVar9 = (long *)func_0x04fe48b0(param_1[9],param_2,param_3,*(undefined8 *)PTR_DAT_077da908);
    if (((ulong)plVar9 & 1) == 0) {
      return plVar9;
    }
    if (lStack_28 == 0) goto LAB_06232614;
    uVar10 = func_0x04f37608(lStack_28,uVar18,&lStack_38,*(undefined8 *)PTR_DAT_077da900);
    if (((lStack_38 != 0) && ((uVar10 & 1) != 0)) && (*(long *)(lStack_38 + 0x18) != 0)) {
      plVar21 = (long *)(lStack_38 + 0x10);
      *plVar21 = 0;
      goto SUB_032809c4;
    }
    plVar17 = param_1;
    plVar9 = plVar21;
    uVar13 = 0x6232600;
SUB_0623049c:
    puVar8 = (undefined1 *)((long)puVar7 + -0x20);
    *(undefined8 *)((long)puVar7 + -0x20) = uVar13;
    *(ulong *)((long)puVar7 + -0x10) = uVar18;
    *(long **)((long)puVar7 + -8) = plVar17;
    uVar13 = 0x7e24000;
    if ((bRam0000000007e24519 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077da7f0);
      bRam0000000007e24519 = 1;
    }
    uVar23 = 0x62304d0;
    plVar17 = param_1;
  }
  *(undefined8 *)(puVar8 + -0x20) = uVar23;
  *(undefined8 *)(puVar8 + -0x18) = param_2;
  *(undefined8 *)(puVar8 + -0x10) = uVar13;
  *(long **)(puVar8 + -8) = plVar17;
  if ((bRam0000000007e2451c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa18);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e2451c = 1;
  }
  lVar19 = param_1[9];
  if (lVar19 == 0) {
    return (long *)**(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
  }
  plVar21 = (long *)param_1[6];
  if (plVar21 != (long *)0x0) {
    lVar15 = *plVar21;
    lVar20 = *(long *)PTR_DAT_077daa18;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x20)) {
          lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar20 + 0x50)) * 0x10 + 0x138;
          goto LAB_06232f2c;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    lVar15 = func_0x03256b10(plVar21);
LAB_06232f2c:
    lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar20);
                    /* WARNING: Could not recover jumptable at 0x06232f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar21 = (long *)(**(code **)(lVar15 + 8))(plVar21,lVar19,lVar15);
    return plVar21;
  }
  auVar25 = func_0x03280cac();
  uVar13 = auVar25._8_8_;
  lVar15 = auVar25._0_8_;
  *(undefined8 *)(puVar8 + -0x50) = 0x6232f58;
  *(long **)(puVar8 + -0x40) = plVar9;
  *(undefined8 *)(puVar8 + -0x38) = param_2;
  *(undefined8 *)(puVar8 + -0x30) = 0;
  *(long *)(puVar8 + -0x28) = lVar19;
  if ((bRam0000000007e2451b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa20);
    bRam0000000007e2451b = 1;
  }
  plVar21 = (long *)func_0x055fde0c(uVar13,0);
  if (((ulong)plVar21 & 1) != 0) {
    return plVar21;
  }
  plVar21 = *(long **)(lVar15 + 0x30);
  if (plVar21 == (long *)0x0) {
    lVar19 = func_0x03280cac();
    puVar5 = PTR_DAT_077daa30;
    puVar4 = PTR_DAT_077daa28;
    *(undefined8 *)(puVar8 + -0x90) = 0x6233054;
    *(undefined **)(puVar8 + -0x80) = puVar22;
    *(long **)(puVar8 + -0x78) = unaff_x23;
    *(long **)(puVar8 + -0x70) = plVar9;
    *(undefined8 *)(puVar8 + -0x68) = 0;
    *(undefined8 *)(puVar8 + -0x60) = uVar13;
    *(long *)(puVar8 + -0x58) = lVar15;
    if ((bRam0000000007e2451e & 1) == 0) {
      func_0x03280a18(PTR_DAT_077daa30);
      func_0x03280a18(PTR_DAT_077daa28);
      func_0x03280a18(PTR_DAT_0774ecc0);
      func_0x03280a18(PTR_DAT_0774ecb8);
      bRam0000000007e2451e = 1;
    }
    lVar15 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04fe1fa4(lVar15,*(undefined8 *)puVar5);
    plVar21 = (long *)(lVar19 + 0x48);
    *plVar21 = lVar15;
  }
  else {
    lVar19 = *plVar21;
    lVar20 = *(long *)PTR_DAT_077daa20;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x20)) {
          lVar19 = lVar19 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar20 + 0x50)) * 0x10 + 0x138;
          goto LAB_06233000;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    lVar19 = func_0x03256b10(plVar21);
LAB_06233000:
    lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar20);
    lVar19 = (**(code **)(lVar19 + 8))(plVar21,uVar13,lVar19);
    if (lVar19 == 0) {
      return (long *)0x0;
    }
    plVar21 = (long *)(lVar15 + 0x48);
    *plVar21 = lVar19;
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar21 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar21 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar21;
code_r0x06232860:
  lVar15 = *plVar21;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
        goto LAB_062328b0;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  param_3 = (long *)0x11;
  puVar11 = (undefined8 *)func_0x03256b10(plVar21);
LAB_062328b0:
  lVar15 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  if (lVar15 == 0) goto LAB_062327a4;
  lVar15 = *plVar21;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
        goto LAB_06232910;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  param_3 = (long *)0x11;
  puVar11 = (undefined8 *)func_0x03256b10(plVar21);
LAB_06232910:
  plVar12 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
  plVar21 = plVar12;
  if (plVar12 != (long *)0x0) {
    lVar15 = *plVar12;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06232970;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    param_3 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06232970:
    plVar21 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    if (plVar9 != (long *)0x0) {
      lVar15 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_062329d0;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      param_3 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x03256b10(plVar9);
LAB_062329d0:
      uVar13 = (*(code *)*puVar11)(plVar9,puVar11[1]);
      auVar25._8_8_ = uVar13;
      auVar25._0_8_ = uVar13;
      if (plVar21 == (long *)0x0) goto LAB_06232ae4;
      param_3 = (long *)0x0;
      uVar18 = func_0x055f6a38(plVar21);
      if ((uVar18 & 1) != 0) {
        lVar15 = *plVar9;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06232a40;
            }
            uVar18 = uVar18 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar18 != 0);
        }
        param_3 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(plVar9);
LAB_06232a40:
        uVar13 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        func_0x06231450(lVar19,uVar13);
      }
      goto LAB_062327a4;
    }
LAB_06232adc:
    plVar21 = plVar12;
    func_0x03280cac();
  }
  auVar25 = func_0x03280cac();
LAB_06232ae4:
  func_0x03280cac(auVar25._0_8_,auVar25._8_8_);
  goto LAB_06232ae8;
}

