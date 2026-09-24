/* Ghidra 12.1.2 native pseudocode; RVA 0x666BF18; MergeEngine.ECS.Systems.Board.ChargableSystem.InitializeSystem; status ok */


/* WARNING: Possible PIC construction at 0x064a7030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x064a7034) */
/* WARNING: Removing unreachable block (ram,0x064a704c) */
/* WARNING: Removing unreachable block (ram,0x064a7050) */
/* WARNING: Removing unreachable block (ram,0x064a7078) */
/* WARNING: Removing unreachable block (ram,0x064a7088) */
/* WARNING: Removing unreachable block (ram,0x064a7090) */
/* WARNING: Removing unreachable block (ram,0x064a70b8) */
/* WARNING: Removing unreachable block (ram,0x064a709c) */
/* WARNING: Removing unreachable block (ram,0x064a70a8) */
/* WARNING: Removing unreachable block (ram,0x064a70c8) */
/* WARNING: Removing unreachable block (ram,0x064a7148) */

void MergeEngine_ECS_Systems_Board_ChargableSystem__InitializeSystem(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  long *plVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  
  puVar2 = PTR_DAT_07807f90;
  puVar1 = PTR_DAT_0774e758;
  if ((bRam0000000007e280ed & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07807f90);
    bRam0000000007e280ed = 1;
  }
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x056ed730(uVar5,param_1,*(undefined8 *)puVar2,0);
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar3 + -0x20) = unaff_x30;
    *(undefined8 *)(puVar3 + -0x18) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x10) = unaff_x20;
    *(long **)(puVar3 + -8) = unaff_x19;
    if ((bRam0000000007e26167 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779a20);
      bRam0000000007e26167 = 1;
    }
    plVar9 = (long *)param_1[4];
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_064a6d34;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_064a6d1c;
    }
    auVar11 = func_0x03280cac();
    *(undefined8 *)(puVar3 + -0x40) = 0x64a6d6c;
    *(undefined8 *)(puVar3 + -0x38) = 0x7e26000;
    *(undefined8 *)(puVar3 + -0x30) = 0;
    *(undefined8 *)(puVar3 + -0x28) = uVar5;
    if ((bRam0000000007e26168 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779a20);
      bRam0000000007e26168 = 1;
    }
    plVar9 = *(long **)(auVar11._0_8_ + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_064a6ddc;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_064a6dc4;
    }
    param_1 = (long *)func_0x03280cac();
    *(undefined8 *)(puVar3 + -0x70) = 0x64a6e18;
    *(undefined **)(puVar3 + -0x68) = unaff_x23;
    *(undefined **)(puVar3 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x58) = 0x7e26000;
    *(undefined8 *)(puVar3 + -0x50) = 0;
    *(long *)(puVar3 + -0x48) = auVar11._8_8_;
    if ((bRam0000000007e26169 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077d13e8);
      func_0x03280a18(PTR_DAT_077db960);
      func_0x03280a18(PTR_DAT_0774e758);
      func_0x03280a18(PTR_DAT_077caee8);
      func_0x03280a18(PTR_DAT_0777e5c0);
      func_0x03280a18(PTR_DAT_077f1048);
      func_0x03280a18(PTR_DAT_077d13f0);
      func_0x03280a18(PTR_DAT_077f1050);
      func_0x03280a18(PTR_DAT_077f1058);
      func_0x03280a18(PTR_DAT_077f1060);
      bRam0000000007e26169 = 1;
    }
    unaff_x22 = PTR_DAT_077db960;
    if ((char)param_1[6] != '\0') {
      return;
    }
    plVar9 = (long *)param_1[2];
    unaff_x21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077db960);
    func_0x054221d4(unaff_x21,param_1,*(undefined8 *)(*param_1 + 0x1f0),0);
    puVar1 = PTR_DAT_0777e5c0;
    if (plVar9 == (long *)0x0) break;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777e5c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_064a6f40;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777e5c0,0);
LAB_064a6f40:
    (*(code *)*puVar4)(plVar9,unaff_x21,puVar4[1]);
    plVar9 = (long *)param_1[2];
    unaff_x21 = func_0x03280ca0(*(undefined8 *)unaff_x22);
    func_0x054221d4(unaff_x21,param_1,*(undefined8 *)(*param_1 + 0x200),0);
    unaff_x23 = puVar1;
    if (plVar9 == (long *)0x0) break;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_064a6fc8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar1,2);
LAB_064a6fc8:
    (*(code *)*puVar4)(plVar9,unaff_x21,puVar4[1]);
    lVar6 = func_0x03eb6c18(param_1,*(undefined8 *)PTR_DAT_077f1058);
    param_1[7] = lVar6;
    func_0x032809c4();
    uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
    func_0x056ed730(uVar5,param_1,*(undefined8 *)PTR_DAT_077f1060,0);
    unaff_x30 = 0x64a7034;
    puVar3 = puVar3 + -0x70;
    unaff_x19 = param_1;
    unaff_x20 = uVar5;
  }
  plVar9 = (long *)func_0x03280cac();
  *(undefined8 *)(puVar3 + -0xa0) = 0x64a718c;
  *(undefined **)(puVar3 + -0x98) = unaff_x23;
  *(undefined **)(puVar3 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x88) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x80) = 0;
  *(long **)(puVar3 + -0x78) = param_1;
  if ((bRam0000000007e2616a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db960);
    func_0x03280a18(PTR_DAT_0777e5c0);
    bRam0000000007e2616a = 1;
  }
  puVar1 = PTR_DAT_077db960;
  if ((char)plVar9[6] == '\0') {
    return;
  }
  (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
  plVar10 = (long *)plVar9[2];
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x054221d4(uVar5,plVar9,*(undefined8 *)(*plVar9 + 0x1f0),0);
  puVar2 = PTR_DAT_0777e5c0;
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777e5c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_064a7268;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777e5c0,1);
LAB_064a7268:
    (*(code *)*puVar4)(plVar10,uVar5,puVar4[1]);
    plVar10 = (long *)plVar9[2];
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x054221d4(uVar5,plVar9,*(undefined8 *)(*plVar9 + 0x200),0);
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_064a72f0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,3);
LAB_064a72f0:
      (*(code *)*puVar4)(plVar10,uVar5,puVar4[1]);
      *(undefined1 *)(plVar9 + 6) = 0;
      return;
    }
  }
  func_0x03280cac();
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_064a6d1c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779a20) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_064a6d50;
    }
  }
LAB_064a6d34:
  puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07779a20,0);
LAB_064a6d50:
                    /* WARNING: Could not recover jumptable at 0x064a6d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar9,uVar5,puVar4[1]);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_064a6dc4:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779a20) {
      puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
      goto LAB_064a6dfc;
    }
  }
LAB_064a6ddc:
  puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07779a20,1);
LAB_064a6dfc:
                    /* WARNING: Could not recover jumptable at 0x064a6e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar9,auVar11._8_8_,puVar4[1]);
  return;
}

