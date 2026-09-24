/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeHelper$$get_affectedCellList RVA 0x1e179fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e279fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01e27b7c + 0x1e27a14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e27b80 + 0x1e27a28));
    func_0x01384978(*(undefined4 *)(_UNK_01e27b84 + 0x1e27a34));
    func_0x01384978(*(undefined4 *)(_UNK_01e27b88 + 0x1e27a40));
    func_0x01384978(*(undefined4 *)(_UNK_01e27b8c + 0x1e27a4c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e6b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e6b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0228820c + 0x228812c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02288210 + 0x2288140),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02288214 + 0x22881fc));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e27b90 + 0x1e27ab4));
    func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01e27b94 + 0x1e27ac8));
    *(int *)(param_1 + 8) = iVar1;
    iVar5 = 4;
    piVar9 = *(int **)(_UNK_01e27b98 + 0x1e27ae4);
    do {
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e27b9c + 0x1e27aec));
      func_0x0244f5a0(uVar7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 8);
      uVar6 = *(uint *)(iVar1 + 0xc);
      iVar8 = *piVar9;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (uVar6 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar6 + 1;
        *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar7;
      }
      else {
        func_0x0328f170(iVar1,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
        ;
      }
      iVar1 = *(int *)(param_1 + 8);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar1;
}



// ===== FAT.MergeHelper.AffectedCell$$.ctor RVA 0x1e17ba0 =====

void FUN_01e27ba0(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeHelper$$CheckDragBehaviour RVA 0x1e17ba8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e27ba8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar6 = (char *)(_UNK_01e2815c + 0x1e27bd0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e28160 + 0x1e27be8));
    func_0x01384978(*(undefined4 *)(_UNK_01e28164 + 0x1e27bf4));
    func_0x01384978(*(undefined4 *)(_UNK_01e28168 + 0x1e27c00));
    func_0x01384978(*(undefined4 *)(_UNK_01e2816c + 0x1e27c0c));
    func_0x01384978(*(undefined4 *)(_UNK_01e28170 + 0x1e27c18));
    func_0x01384978(*(undefined4 *)(_UNK_01e28174 + 0x1e27c24));
    func_0x01384978(*(undefined4 *)(_UNK_01e28178 + 0x1e27c30));
    *pcVar6 = '\x01';
  }
  uStack_50 = 0;
  uStack_48 = 0;
  iVar1 = func_0x0229f06c(0x9e68,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e68,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228850c(&uStack_58,iVar1,param_2,param_3,param_4,param_5,0);
    *param_1 = uStack_58;
    param_1[1] = uStack_54;
    return;
  }
  piVar7 = *(int **)(_UNK_01e2817c + 0x1e27cb4);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar6 = (char *)(_UNK_01e28180 + 0x1e27cd0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e28184 + 0x1e27ce4));
    *pcVar6 = '\x01';
  }
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  fVar16 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
  puVar11 = *(undefined4 **)(_UNK_01e28188 + 0x1e27d1c);
  iVar1 = func_0x03668dfc(*puVar11);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar13 = *(float *)(iVar1 + 0x10);
  fVar9 = *(float *)(iVar1 + 0x14);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cc0100(iVar1,2,0);
  uStack_5c = 1;
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01e2818c + 0x1e27d8c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_5c = FUN_01deabc4(0);
    uStack_5c = uStack_5c ^ 1;
  }
  iVar1 = func_0x03668dfc(*puVar11);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
    func_0x020da680(&uStack_58,0,0);
    *(undefined4 *)(param_2 + 0xc) = uStack_58;
    func_0x01384bf0();
  }
  else {
    func_0x020da680(&uStack_58,iVar1,0);
    *(undefined4 *)(param_2 + 0xc) = uStack_58;
  }
  fVar16 = fVar16 * 0.5;
  iVar8 = 0;
  func_0x020da680(&uStack_58,iVar1,0);
  *(undefined4 *)(param_2 + 0x10) = uStack_54;
  func_0x01e281b8(param_2,param_3,param_4);
  if (param_5 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0210e250(param_5,0xb,0,0);
  puVar11 = *(undefined4 **)(_UNK_01e28190 + 0x1e27e88);
  while( true ) {
    iVar3 = FUN_01e279fc(param_2);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar8) break;
    iVar3 = FUN_01e279fc(param_2);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0328eea8(iVar3,iVar8,*puVar11);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar3 + 0x14) == '\0') {
      if ((uStack_5c == 0) &&
         (fVar15 = *(float *)(iVar3 + 0x20) - fVar9, fVar14 = *(float *)(iVar3 + 0x1c) - fVar13,
         fVar15 * fVar15 + fVar14 * fVar14 < fVar16 * fVar16)) {
        *param_1 = 0;
        param_1[1] = 0;
        goto LAB_01e28094;
      }
    }
    else {
      uVar12 = *(undefined4 *)(iVar3 + 0xc);
      uVar10 = *(undefined4 *)(iVar3 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x020e81ec(iVar1,uVar12,uVar10,0);
      if (iVar3 != 0) {
        iVar4 = func_0x0210e5f4(iVar3,0);
        if (param_5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0210e5f4(param_5,0);
        if (iVar4 != iVar5) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x020e8e2c(iVar1,param_5,iVar3,0);
          if (((((iVar4 != 0) || (iVar4 = func_0x02166108(param_5,iVar3,0), iVar4 != 0)) ||
               (iVar4 = func_0x021661c0(param_5,iVar3,0), iVar4 != 0)) ||
              (iVar4 = func_0x0216630c(param_5,iVar3,0), iVar4 != 0)) ||
             ((iVar2 != 0 &&
              ((iVar4 = func_0x021646a0(param_5,iVar3,0), iVar4 != 0 ||
               (iVar4 = func_0x021669e4(param_5,iVar3,&uStack_50,0), iVar4 != 0)))))) {
            *param_1 = 0;
            param_1[1] = 0;
LAB_01e28148:
            func_0x03909584(param_1,iVar3);
            return;
          }
        }
      }
    }
    iVar8 = iVar8 + 1;
  }
  if (*(int *)(**(int **)(_UNK_01e281b0 + 0x1e28048) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01e0cb38(param_3,param_4,0);
  *param_1 = 0;
  param_1[1] = 0;
LAB_01e28094:
  iVar3 = 0;
  goto LAB_01e28148;
}



// ===== FAT.MergeHelper$$_FillAffectedArea RVA 0x1e181b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e281b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01e2847c + 0x1e281dc);
  uStack_30 = param_2;
  uStack_2c = param_3;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e28480 + 0x1e281f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e28484 + 0x1e28204));
    func_0x01384978(*(undefined4 *)(_UNK_01e28488 + 0x1e28210));
    func_0x01384978(*(undefined4 *)(_UNK_01e2848c + 0x1e2821c));
    func_0x01384978(*(undefined4 *)(_UNK_01e28490 + 0x1e28228));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e6a,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01e28494 + 0x1e2828c);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar5 = (char *)(_UNK_01e28498 + 0x1e282a8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e2849c + 0x1e282bc));
      *pcVar5 = '\x01';
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 8) * 0.5 * 0.25;
    iVar1 = FUN_01e279fc(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(_UNK_01e284a0 + 0x1e28320);
    uVar2 = func_0x0328eea8(iVar1,0,*puVar4);
    fVar7 = -fVar6;
    func_0x01e28564(param_1,uVar2,0,&uStack_30,fVar7,fVar6);
    iVar1 = FUN_01e279fc(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0328eea8(iVar1,1,*puVar4);
    func_0x01e28564(param_1,uVar2,1,&uStack_30,fVar6,fVar6);
    iVar1 = FUN_01e279fc(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0328eea8(iVar1,2,*puVar4);
    func_0x01e28564(param_1,uVar2,2,&uStack_30,fVar7,fVar7);
    iVar1 = FUN_01e279fc(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0328eea8(iVar1,3,*puVar4);
    func_0x01e28564(param_1,uVar2,3,&uStack_30,fVar6,fVar7);
    iVar1 = FUN_01e279fc(param_1);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e284a4 + 0x1e28428));
    func_0x03c751dc(uVar2,param_1,**(undefined4 **)(_UNK_01e284a8 + 0x1e28444),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03290edc(iVar1,uVar2,**(undefined4 **)(_UNK_01e284ac + 0x1e28468));
  }
  else {
    iVar1 = func_0x0229f13c(0x9e6a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021bde10(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MergeHelper$$GetNearestCell RVA 0x1e184b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e284b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01e28558 + 0x1e284c4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2855c + 0x1e284d8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eaf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eaf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02289254 + 0x2289174);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02289258 + 0x2289188),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0228925c + 0x2289244));
    return uVar5;
  }
  iVar1 = FUN_01e279fc(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x0484c9cc(0,0,**(undefined4 **)(_UNK_01e28560 + 0x1e2854c));
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x01384bf4();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



// ===== FAT.MergeHelper$$_FillCell RVA 0x1e18564 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e28564(int param_1,int param_2,undefined4 param_3,float *param_4,float param_5,
                 float param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pcVar9 = (char *)(_UNK_01e28a48 + 0x1e2858c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e28a4c + 0x1e285a4));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9e6c,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    fVar14 = *param_4;
    fVar15 = param_4[1];
    piVar10 = *(int **)(_UNK_01e28a50 + 0x1e28638);
    *(undefined4 *)(param_2 + 8) = param_3;
    iVar2 = *piVar10;
    *(float *)(param_2 + 0x1c) = fVar14 + param_5;
    *(float *)(param_2 + 0x20) = fVar15 + param_6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar9 = (char *)(_UNK_01e28a54 + 0x1e28660);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e28a58 + 0x1e28674));
      *pcVar9 = '\x01';
    }
    iVar2 = *piVar10;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar10;
    }
    pcVar11 = (char *)(_UNK_01e28a5c + 0x1e286a4);
    fVar15 = *(float *)(*(int *)(iVar2 + 0x5c) + 0x14);
    if (*pcVar11 == '\0') {
      func_0x01384978(piVar10);
      iVar2 = *piVar10;
      *pcVar11 = '\x01';
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar10;
    }
    fVar16 = *(float *)(*(int *)(iVar2 + 0x5c) + 8);
    pcVar7 = (char *)(_UNK_01e28a60 + 0x1e286f0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e28a64 + 0x1e28704));
      *pcVar7 = '\x01';
    }
    piVar8 = *(int **)(_UNK_01e28a68 + 0x1e2871c);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar15 = (float)func_0x02450364(((fVar14 + param_5) - fVar15) / fVar16);
    fVar14 = fRam01e28a44;
    cVar1 = *pcVar9;
    uVar13 = in_fpscr & 0xfffffff | (uint)(fVar15 == fRam01e28a44) << 0x1e;
    fVar16 = *(float *)(param_2 + 0x20);
    iVar2 = (int)fVar15;
    if (SUB41(uVar13 >> 0x1e,0)) {
      iVar2 = -0x80000000;
    }
    *(int *)(param_2 + 0xc) = iVar2;
    if (cVar1 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e28a6c + 0x1e28770));
      *pcVar9 = '\x01';
    }
    iVar2 = *piVar10;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar10;
    }
    fVar15 = *(float *)(*(int *)(iVar2 + 0x5c) + 0x18);
    if (*pcVar11 == '\0') {
      func_0x01384978(piVar10);
      iVar2 = *piVar10;
      *pcVar11 = '\x01';
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar10;
    }
    fVar18 = *(float *)(*(int *)(iVar2 + 0x5c) + 8);
    pcVar7 = (char *)(_UNK_01e28a70 + 0x1e287e4);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e28a74 + 0x1e287f8));
      *pcVar7 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar15 = (float)func_0x02450728((fVar16 - fVar15) / fVar18);
    iVar6 = *(int *)(param_2 + 0xc);
    uVar13 = uVar13 & 0xfffffff | (uint)(fVar15 == fVar14) << 0x1e;
    iVar2 = (int)fVar15;
    if (SUB41(uVar13 >> 0x1e,0)) {
      iVar2 = -0x80000000;
    }
    iVar2 = -iVar2;
    iVar3 = param_2;
    if (iVar6 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_2 + 0x10) = iVar2;
    iVar4 = param_2;
    if (iVar6 < 0) {
      bVar5 = false;
    }
    else {
      bVar5 = false;
      if ((iVar6 < *(int *)(param_1 + 0xc)) && (iVar4 = iVar3, -1 < iVar2)) {
        bVar5 = iVar2 < *(int *)(param_1 + 0x10);
      }
      bVar12 = false;
      if (iVar4 == 0) {
        func_0x01384bf0();
        if (!bVar12) {
          software_interrupt(0x800000);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(bool *)(iVar4 + 0x14) = bVar5;
    if (*(char *)(param_2 + 0x14) != '\0') {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e28a78 + 0x1e288d4));
        *pcVar11 = '\x01';
      }
      iVar2 = *piVar10;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar10;
      }
      fVar14 = *(float *)(*(int *)(iVar2 + 0x5c) + 8);
      if (*pcVar9 == '\0') {
        func_0x01384978(piVar10);
        iVar2 = *piVar10;
        *pcVar9 = '\x01';
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar10;
      }
      fVar15 = *(float *)(*(int *)(iVar2 + 0x5c) + 0x14);
      if (*pcVar11 == '\0') {
        func_0x01384978(piVar10);
        iVar2 = *piVar10;
        *pcVar11 = '\x01';
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar10;
      }
      fVar18 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0xc),(byte)(uVar13 >> 0x16) & 3)
      ;
      fVar16 = *param_4;
      fVar19 = *(float *)(*(int *)(iVar2 + 0x5c) + 8);
      if (*pcVar9 == '\0') {
        func_0x01384978(piVar10);
        iVar2 = *piVar10;
        *pcVar9 = '\x01';
      }
      fVar14 = fVar14 * 0.5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar10;
      }
      fVar17 = *(float *)(*(int *)(iVar2 + 0x5c) + 0x18);
      if (*pcVar11 == '\0') {
        func_0x01384978(piVar10);
        iVar2 = *piVar10;
        *pcVar11 = '\x01';
      }
      fVar16 = (fVar14 + fVar15 + fVar19 * fVar18) - fVar16;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar10;
      }
      fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0x10),(byte)(uVar13 >> 0x16) & 3
                                         );
      fVar14 = ((fVar17 - *(float *)(*(int *)(iVar2 + 0x5c) + 8) * fVar15) - fVar14) - param_4[1];
      *(float *)(param_2 + 0x18) = fVar14 * fVar14 + fVar16 * fVar16;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9e6c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02288218(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MergeHelper$$_SortCell RVA 0x1e18a7c =====

int FUN_01e28a7c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = func_0x0229f06c(0x9e6d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e6d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(param_2 + 0x14) == '\0') {
    bVar2 = false;
    if (param_3 == 0) {
      func_0x01384bf0();
      bVar2 = true;
    }
  }
  else {
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(param_3 + 0x14) == '\0') {
      return -1;
    }
    if (*(char *)(param_2 + 0x14) != '\0') goto LAB_01e28b54;
    bVar2 = false;
  }
  if (*(char *)(param_3 + 0x14) != '\0') {
    return 1;
  }
  if ((*(char *)(param_2 + 0x14) == '\0') &&
     ((!bVar2 || (func_0x01384bf0(), *(char *)(param_3 + 0x14) == '\0')))) {
    return *(int *)(param_2 + 8) - *(int *)(param_3 + 8);
  }
LAB_01e28b54:
  iVar1 = 1;
  if ((*(float *)(param_2 + 0x18) <= *(float *)(param_3 + 0x18)) &&
     (iVar1 = -1, *(float *)(param_3 + 0x18) <= *(float *)(param_2 + 0x18))) {
    iVar1 = 0;
  }
  return iVar1;
}



// ===== FAT.MergeHelper$$.ctor RVA 0x1e18bb8 =====

void FUN_01e28bb8(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}


