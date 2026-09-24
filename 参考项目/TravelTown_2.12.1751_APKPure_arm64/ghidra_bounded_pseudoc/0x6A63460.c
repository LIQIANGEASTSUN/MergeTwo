/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6A63460; bound 384 bytes; Merger.MergeBoardSkipCooldownCapability.Logic.SkipCooldownProvider.GetSkipCooldownPrice; status ok */


undefined8
Merger_MergeBoardSkipCooldownCapability_Logic_SkipCooldownProvider__GetSkipCooldownPrice
          (long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x1;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  long unaff_x21;
  code *unaff_x30;
  double dVar13;
  double extraout_d0;
  double dVar14;
  double unaff_d8;
  float fVar15;
  undefined8 unaff_d9;
  float fVar16;
  undefined8 unaff_d10;
  
  if ((bRam0000000007e2a680 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a750);
    bRam0000000007e2a680 = 1;
  }
  lVar6 = 0;
  if (param_3 == (long *)0x0) {
LAB_06b635dc:
    unaff_x21 = lVar6;
    unaff_x20 = param_2;
    unaff_x30 = 
    Merger_MergeBoardSkipCooldownCapability_Logic_SkipCooldownProvider__CalculatePriceWithSkipCooldownSettings
    ;
    dVar13 = (double)func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    lVar6 = extraout_x1;
    unaff_x19 = param_1;
code_r0x06b635e0:
    *(double *)((long)register0x00000008 + -0x30) = unaff_d8;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    unaff_x20 = 0x7e2a000;
    if ((bRam0000000007e2a681 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07771f40);
      bRam0000000007e2a681 = 1;
    }
    if ((lVar6 != 0) && (lVar7 = *(long *)(lVar6 + 0x18), lVar7 != 0)) {
      iVar3 = *(int *)(lVar7 + 0x18);
      if (0 < iVar3) {
        iVar10 = 0;
        do {
          if (iVar3 == iVar10) goto LAB_06b636d4;
          lVar11 = *(long *)(lVar7 + (long)iVar10 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_06b636d0;
          if ((double)*(float *)(lVar11 + 0x10) < dVar13) {
            lVar7 = *(long *)(lVar11 + 0x18);
            if (lVar7 != 0) {
              uVar1 = *(undefined4 *)(lVar7 + 0x10);
              uVar2 = *(undefined4 *)(lVar7 + 0x14);
              uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
              func_0x06b21870(uVar5,uVar1,uVar2,0,0);
              return uVar5;
            }
            goto LAB_06b636d0;
          }
          iVar10 = iVar10 + 1;
        } while (iVar3 != iVar10);
      }
      uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
      func_0x06b21870(uVar5,2,1,0,0);
      return uVar5;
    }
LAB_06b636d0:
    func_0x03280cac();
LAB_06b636d4:
    unaff_x30 = 
    Merger_MergeBoardSkipCooldownCapability_Logic_SkipCooldownProvider__CalculatePriceWithCoefficents
    ;
    param_1 = func_0x03280cb4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = lVar6;
    dVar14 = extraout_d0;
    unaff_d8 = dVar13;
  }
  else {
    lVar6 = *param_3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x1a) * 0x10 + 0x138);
          goto LAB_06b63504;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e548,0x1a);
LAB_06b63504:
    lVar6 = (*(code *)*puVar4)(param_3,puVar4[1]);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x70);
    }
    dVar13 = (double)func_0x06b632d4(param_1,param_2);
    plVar12 = *(long **)(param_1 + 0x38);
    param_2 = 0;
    if (plVar12 == (long *)0x0) goto LAB_06b635dc;
    lVar7 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a750) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x43) * 0x10 + 0x138);
          goto LAB_06b63590;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a750,0x43);
LAB_06b63590:
    uVar8 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    dVar14 = dVar13;
    if ((lVar6 != 0) && ((uVar8 & 1) != 0)) goto code_r0x06b635e0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(double *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long *)((long)register0x00000008 + -8) = unaff_x19;
  if ((bRam0000000007e2a682 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e2a682 = 1;
  }
  lVar6 = func_0x06b63140(param_1);
  if (lVar6 == 0) goto SUB_057da5fc;
  fVar15 = *(float *)(lVar6 + 0x10);
  lVar6 = func_0x06b63140(param_1);
  if (lVar6 == 0) goto SUB_057da5fc;
  fVar16 = *(float *)(lVar6 + 0x14);
  if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
  }
  dVar13 = (double)func_0x05797bf8(dVar14,(double)fVar16,0);
  dVar13 = dVar13 * (double)fVar15;
  dVar14 = (double)func_0x072ce9c0(dVar13,(undefined1 *)((long)register0x00000008 + -0x38));
  if (0.0 <= dVar13) {
    if (dVar14 == 0.5) {
      dVar13 = *(double *)((long)register0x00000008 + -0x38);
      dVar14 = 1.0;
      goto LAB_06b637b0;
    }
    dVar13 = (double)(long)(dVar13 + 0.5);
  }
  else if (dVar14 == -0.5) {
    dVar13 = *(double *)((long)register0x00000008 + -0x38);
    dVar14 = -1.0;
LAB_06b637b0:
    if (((long)dVar13 & 1U) != 0) {
      dVar13 = dVar13 + dVar14;
    }
  }
  else {
    dVar13 = (double)(long)(dVar13 + -0.5);
  }
  iVar3 = -0x80000000;
  if (dVar13 != INFINITY) {
    iVar3 = (int)dVar13;
  }
  lVar6 = func_0x06b63140(param_1);
  if (lVar6 != 0) {
    uVar1 = *(undefined4 *)(lVar6 + 0x18);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
    func_0x06b21870(uVar5,uVar1,iVar3,0,0);
    return uVar5;
  }
SUB_057da5fc:
  uVar5 = func_0x03280cac();
  return uVar5;
}

