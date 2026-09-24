/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UserGradeMan$$get_IsTagExpire RVA 0x1ce430c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cf430c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
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
  
  iVar2 = func_0x0229f06c(0x208,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x208,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021742f8;
  }
  iVar2 = func_0x0229f06c(0x209,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x209,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021742f8;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    iVar2 = func_0x01cf6714(param_1);
LAB_01cf4420:
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x2a7);
    iVar2 = func_0x01cf6714(param_1);
    if (cVar1 == '\0') goto LAB_01cf4420;
    if (iVar2 != 0) {
      return 1;
    }
  }
  pcVar7 = (char *)(_UNK_01cf7e28 + 0x1cf7d10);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf7e2c + 0x1cf7d24));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7e30 + 0x1cf7d30));
    *pcVar7 = '\x01';
  }
  uVar4 = 0;
  iVar2 = func_0x0229f06c(0x20f,0);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x28) != 0) &&
       (iVar2 = func_0x02450200(*(int *)(param_1 + 0x28),
                                **(undefined4 **)(_UNK_01cf7e34 + 0x1cf7d98)), 0 < iVar2)) {
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf7e38 + 0x1cf7db4));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      uVar12 = func_0x01c359e8(iVar2,0);
      iVar2 = (int)((ulonglong)uVar12 >> 0x20);
      uVar3 = (uint)uVar12;
      uVar5 = *(uint *)(param_1 + 0x38);
      iVar9 = *(int *)(param_1 + 0x3c);
      if ((iVar9 < (int)(uint)(uVar5 == 0)) ||
         ((int)(iVar9 - (iVar2 + (uint)(uVar5 < uVar3))) < 0 ==
          (SBORROW4(iVar9,iVar2) != SBORROW4(iVar9 - iVar2,(uint)(uVar5 < uVar3))))) {
        iVar8 = *(int *)(param_1 + 0x44);
        bVar11 = uVar3 < *(uint *)(param_1 + 0x40);
        uVar4 = (uint)((int)(iVar9 - (iVar2 + (uint)(uVar5 < uVar3))) < 0 ==
                       (SBORROW4(iVar9,iVar2) != SBORROW4(iVar9 - iVar2,(uint)(uVar5 < uVar3))) ||
                      (int)(iVar2 - (iVar8 + (uint)bVar11)) < 0 ==
                      (SBORROW4(iVar2,iVar8) != SBORROW4(iVar2 - iVar8,(uint)bVar11)));
      }
    }
    return uVar4;
  }
  iVar2 = func_0x0229f13c(0x20f,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.UserGradeMan$$_CheckTagExpire RVA 0x1ce4364 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cf4364(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
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
  
  iVar2 = func_0x0229f06c(0x209,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x209,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021742f8;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    iVar2 = func_0x01cf6714(param_1);
LAB_01cf4420:
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x2a7);
    iVar2 = func_0x01cf6714(param_1);
    if (cVar1 == '\0') goto LAB_01cf4420;
    if (iVar2 != 0) {
      return 1;
    }
  }
  pcVar7 = (char *)(_UNK_01cf7e28 + 0x1cf7d10);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf7e2c + 0x1cf7d24));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7e30 + 0x1cf7d30));
    *pcVar7 = '\x01';
  }
  uVar4 = 0;
  iVar2 = func_0x0229f06c(0x20f,0);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x28) != 0) &&
       (iVar2 = func_0x02450200(*(int *)(param_1 + 0x28),
                                **(undefined4 **)(_UNK_01cf7e34 + 0x1cf7d98)), 0 < iVar2)) {
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf7e38 + 0x1cf7db4));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      uVar12 = func_0x01c359e8(iVar2,0);
      iVar2 = (int)((ulonglong)uVar12 >> 0x20);
      uVar3 = (uint)uVar12;
      uVar5 = *(uint *)(param_1 + 0x38);
      iVar9 = *(int *)(param_1 + 0x3c);
      if ((iVar9 < (int)(uint)(uVar5 == 0)) ||
         ((int)(iVar9 - (iVar2 + (uint)(uVar5 < uVar3))) < 0 ==
          (SBORROW4(iVar9,iVar2) != SBORROW4(iVar9 - iVar2,(uint)(uVar5 < uVar3))))) {
        iVar8 = *(int *)(param_1 + 0x44);
        bVar11 = uVar3 < *(uint *)(param_1 + 0x40);
        uVar4 = (uint)((int)(iVar9 - (iVar2 + (uint)(uVar5 < uVar3))) < 0 ==
                       (SBORROW4(iVar9,iVar2) != SBORROW4(iVar9 - iVar2,(uint)(uVar5 < uVar3))) ||
                      (int)(iVar2 - (iVar8 + (uint)bVar11)) < 0 ==
                      (SBORROW4(iVar2,iVar8) != SBORROW4(iVar2 - iVar8,(uint)bVar11)));
      }
    }
    return uVar4;
  }
  iVar2 = func_0x0229f13c(0x20f,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.UserGradeMan$$Reset RVA 0x1ce4430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf4430(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01cf44f4 + 0x1cf4444);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf44f8 + 0x1cf4458));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x97d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x97d3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined2 *)(param_1 + 8) = 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024509cc(iVar1,**(undefined4 **)(_UNK_01cf44fc + 0x1cf44c8));
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ===== FAT.UserGradeMan$$LoadConfig RVA 0x1ce4500 =====

/* WARNING: Removing unreachable block (ram,0x01cf4940) */
/* WARNING: Removing unreachable block (ram,0x01cf494c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf4500(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  iVar1 = func_0x0229f06c(0x97d4,0);
  if (iVar1 == 0) {
    pcVar8 = (char *)(_UNK_01cf4a8c + 0x1cf4570);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cf4a90 + 0x1cf4584));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4a94 + 0x1cf4590));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4a98 + 0x1cf459c));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4a9c + 0x1cf45a8));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4aa0 + 0x1cf45b4));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4aa4 + 0x1cf45c0));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4aa8 + 0x1cf45cc));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4aac + 0x1cf45d8));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4ab0 + 0x1cf45e4));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4ab4 + 0x1cf45f0));
      func_0x01384978(*(undefined4 *)(_UNK_01cf4ab8 + 0x1cf45fc));
      *pcVar8 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x97d5,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        func_0x0245058c(*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_01cf4abc + 0x1cf4664));
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x01ca8868(iVar1,0);
      if (piVar2 != (int *)0x0) {
        if (*(int *)(param_1 + 0x28) == 0) {
          uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01cf4ac0 + 0x1cf46c0));
          func_0x02450574(uVar11,**(undefined4 **)(_UNK_01cf4ac4 + 0x1cf46d4));
          *(undefined4 *)(param_1 + 0x28) = uVar11;
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01cf4ac8 + 0x1cf46f0)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01cf4738;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf4ac8 + 0x1cf46f0),0);
LAB_01cf4738:
        piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
        piVar5 = *(int **)(_UNK_01cf4acc + 0x1cf4758);
        piVar12 = *(int **)(_UNK_01cf4ad0 + 0x1cf4760);
LAB_01cf475c:
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar5) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01cf47b8;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01cf47b8:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 != 0) {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar2;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) {
                puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto LAB_01cf482c;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01cf482c:
          iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(char *)(iVar1 + 0x20) != '\0') {
            iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01cf4ad4 + 0x1cf4864));
            func_0x0244f5a0(iVar10,0);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar9 = *(int *)(param_1 + 0x28);
            uVar7 = *(undefined4 *)(iVar1 + 0x10);
            uVar11 = *(undefined4 *)(iVar1 + 0x1c);
            *(int *)(iVar10 + 8) = iVar1;
            *(undefined4 *)(iVar10 + 0xc) = uVar11;
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            func_0x02450824(iVar9,uVar7,iVar10,**(undefined4 **)(_UNK_01cf4ad8 + 0x1cf48ac));
          }
          goto LAB_01cf475c;
        }
        if (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(_UNK_01cf4adc + 0x1cf48e0)) {
                puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto LAB_01cf4928;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf4adc + 0x1cf48e0),0);
LAB_01cf4928:
          (*(code *)*puVar3)(piVar2,puVar3[1]);
        }
        iVar1 = *(int *)(param_1 + 0x28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450200(iVar1,**(undefined4 **)(_UNK_01cf4ae0 + 0x1cf4970));
        if ((0 < iVar1) && (*(int *)(param_1 + 0x2c) == 0)) {
          uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01cf4ae4 + 0x1cf4998));
          func_0x020c8e18(uVar11,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar11;
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x97d5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x97d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar10 = *(int *)(iVar1 + 8);
  uVar11 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  func_0x0245495c(iVar10,uVar11,&uStack_30,uVar7,0,0);
  return;
}



// ===== FAT.UserGradeMan$$_InitAPIReqInfo RVA 0x1ce4558 =====

/* WARNING: Removing unreachable block (ram,0x01cf4940) */
/* WARNING: Removing unreachable block (ram,0x01cf494c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf4558(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01cf4a8c + 0x1cf4570);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf4a90 + 0x1cf4584));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4a94 + 0x1cf4590));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4a98 + 0x1cf459c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4a9c + 0x1cf45a8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4aa0 + 0x1cf45b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4aa4 + 0x1cf45c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4aa8 + 0x1cf45cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4aac + 0x1cf45d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4ab0 + 0x1cf45e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4ab4 + 0x1cf45f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf4ab8 + 0x1cf45fc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x97d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x97d5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar7,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0245058c(*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_01cf4abc + 0x1cf4664));
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca8868(iVar1,0);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01cf4ac0 + 0x1cf46c0));
      func_0x02450574(uVar11,**(undefined4 **)(_UNK_01cf4ac4 + 0x1cf46d4));
      *(undefined4 *)(param_1 + 0x28) = uVar11;
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cf4ac8 + 0x1cf46f0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cf4738;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf4ac8 + 0x1cf46f0),0);
LAB_01cf4738:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar5 = *(int **)(_UNK_01cf4acc + 0x1cf4758);
    piVar12 = *(int **)(_UNK_01cf4ad0 + 0x1cf4760);
LAB_01cf475c:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar5) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01cf47b8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01cf47b8:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cf482c;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01cf482c:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x20) != '\0') {
        iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01cf4ad4 + 0x1cf4864));
        func_0x0244f5a0(iVar10,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(param_1 + 0x28);
        uVar7 = *(undefined4 *)(iVar1 + 0x10);
        uVar11 = *(undefined4 *)(iVar1 + 0x1c);
        *(int *)(iVar10 + 8) = iVar1;
        *(undefined4 *)(iVar10 + 0xc) = uVar11;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x02450824(iVar9,uVar7,iVar10,**(undefined4 **)(_UNK_01cf4ad8 + 0x1cf48ac));
      }
      goto LAB_01cf475c;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01cf4adc + 0x1cf48e0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01cf4928;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf4adc + 0x1cf48e0),0);
LAB_01cf4928:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450200(iVar1,**(undefined4 **)(_UNK_01cf4ae0 + 0x1cf4970));
    if ((0 < iVar1) && (*(int *)(param_1 + 0x2c) == 0)) {
      uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01cf4ae4 + 0x1cf4998));
      func_0x020c8e18(uVar11,0);
      *(undefined4 *)(param_1 + 0x2c) = uVar11;
    }
  }
  return;
}



// ===== FAT.UserGradeMan$$Startup RVA 0x1ce4aec =====

void FUN_01cf4aec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x97d6,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x97d6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.UserGradeMan$$SetData RVA 0x1ce4b38 =====

/* WARNING: Possible PIC construction at 0x01cf4c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cf4c80) */
/* WARNING: Removing unreachable block (ram,0x01cf4f00) */
/* WARNING: Removing unreachable block (ram,0x01cf4f10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf4b38(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int *piVar10;
  undefined4 unaff_lr;
  undefined1 auStack_38 [4];
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [4];
  
  iVar1 = func_0x0229f06c(0x97d7,0);
  if (iVar1 == 0) {
    pcVar8 = (char *)(_UNK_01cf5000 + 0x1cf4bb8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cf5004 + 0x1cf4bcc));
      func_0x01384978(*(undefined4 *)(_UNK_01cf5008 + 0x1cf4bd8));
      func_0x01384978(*(undefined4 *)(_UNK_01cf500c + 0x1cf4be4));
      func_0x01384978(*(undefined4 *)(_UNK_01cf5010 + 0x1cf4bf0));
      func_0x01384978(*(undefined4 *)(_UNK_01cf5014 + 0x1cf4bfc));
      func_0x01384978(*(undefined4 *)(_UNK_01cf5018 + 0x1cf4c08));
      func_0x01384978(*(undefined4 *)(_UNK_01cf501c + 0x1cf4c14));
      func_0x01384978(*(undefined4 *)(_UNK_01cf5020 + 0x1cf4c20));
      func_0x01384978(*(undefined4 *)(_UNK_01cf5024 + 0x1cf4c2c));
      *pcVar8 = '\x01';
    }
    aiStack_28[0] = 0;
    iVar1 = func_0x0229f06c(0x97d8,0);
    if (iVar1 == 0) {
      if ((((*(int *)(param_1 + 0x28) != 0) &&
           (iVar1 = func_0x02450200(*(int *)(param_1 + 0x28),
                                    **(undefined4 **)(_UNK_01cf5028 + 0x1cf4c9c)), param_2 != 0)) &&
          (0 < iVar1)) && (*(int *)(param_2 + 0x10) != 0)) {
        iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x24);
        if (iVar1 != 0) {
          pcVar8 = *(char **)(iVar1 + 0x5c);
        }
        if (iVar1 != 0 && pcVar8 != (char *)0x0) {
          iVar1 = *(int *)(pcVar8 + 0x18);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0345fcc8(iVar1,**(undefined4 **)(_UNK_01cf502c + 0x1cf4cf4));
          if (0 < iVar1) {
            iVar1 = *(int *)(pcVar8 + 0x18);
            pcStack_34 = pcVar8;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_01cf5030 + 0x1cf4d24));
            piVar10 = *(int **)(_UNK_01cf5034 + 0x1cf4d44);
LAB_01cf4d40:
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar2;
            uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar6[-1] == *piVar10) {
                  puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                  goto LAB_01cf4d9c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01cf4d9c:
            iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
            if (iVar1 != 0) {
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar2;
              uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar6[-1] == **(int **)(_UNK_01cf5038 + 0x1cf4dd0)) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                    goto LAB_01cf4e18;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf5038 + 0x1cf4dd0),0)
              ;
LAB_01cf4e18:
              (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
              uVar7 = uStack_2c;
              uVar9 = uStack_30;
              iVar1 = *(int *)(param_1 + 0x28);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar4 = func_0x02450cc8(iVar1,uVar9,aiStack_28,
                                      **(undefined4 **)(_UNK_01cf503c + 0x1cf4e50));
              iVar1 = aiStack_28[0];
              if (iVar4 != 0) {
                if (aiStack_28[0] == 0) {
                  func_0x01384bf0();
                }
                *(undefined4 *)(iVar1 + 0xc) = uVar7;
              }
              goto LAB_01cf4d40;
            }
            if (piVar2 != (int *)0x0) {
              iVar1 = *piVar2;
              uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar5 != 0) {
                piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar10[-1] == **(int **)(_UNK_01cf5040 + 0x1cf4ea0)) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
                    goto LAB_01cf4ee8;
                  }
                  uVar5 = uVar5 - 1;
                  piVar10 = piVar10 + 2;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf5040 + 0x1cf4ea0),0)
              ;
LAB_01cf4ee8:
              (*(code *)*puVar3)(piVar2,puVar3[1]);
            }
            uVar9 = *(undefined4 *)(pcStack_34 + 0x14);
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(pcStack_34 + 0x10);
            *(undefined4 *)(param_1 + 0x34) = uVar9;
            func_0x01cf72c4(param_1);
          }
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x97d8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cf4c80;
    unaff_r4 = param_1;
    unaff_r5 = param_2;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_38;
  }
  else {
    iVar1 = func_0x0229f13c(0x97d7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar4 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar1 == 0) {
    uVar7 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar7);
  return;
}



// ===== FAT.UserGradeMan$$_TryUseAPIArchiveData RVA 0x1ce4b9c =====

/* WARNING: Removing unreachable block (ram,0x01cf4f00) */
/* WARNING: Removing unreachable block (ram,0x01cf4f10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf4b9c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01cf5000 + 0x1cf4bb8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf5004 + 0x1cf4bcc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5008 + 0x1cf4bd8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf500c + 0x1cf4be4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5010 + 0x1cf4bf0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5014 + 0x1cf4bfc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5018 + 0x1cf4c08));
    func_0x01384978(*(undefined4 *)(_UNK_01cf501c + 0x1cf4c14));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5020 + 0x1cf4c20));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5024 + 0x1cf4c2c));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x97d8,0);
  if (iVar2 == 0) {
    if ((((*(int *)(param_1 + 0x28) != 0) &&
         (iVar2 = func_0x02450200(*(int *)(param_1 + 0x28),
                                  **(undefined4 **)(_UNK_01cf5028 + 0x1cf4c9c)), param_2 != 0)) &&
        (0 < iVar2)) && (*(int *)(param_2 + 0x10) != 0)) {
      iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x24);
      if (iVar2 != 0) {
        pcVar9 = *(char **)(iVar2 + 0x5c);
      }
      if (iVar2 != 0 && pcVar9 != (char *)0x0) {
        iVar2 = *(int *)(pcVar9 + 0x18);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0345fcc8(iVar2,**(undefined4 **)(_UNK_01cf502c + 0x1cf4cf4));
        if (0 < iVar2) {
          iVar2 = *(int *)(pcVar9 + 0x18);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar3 = (int *)func_0x0345f9b0(iVar2,**(undefined4 **)(_UNK_01cf5030 + 0x1cf4d24));
          piVar10 = *(int **)(_UNK_01cf5034 + 0x1cf4d44);
LAB_01cf4d40:
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                goto LAB_01cf4d9c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_01cf4d9c:
          iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar2 != 0) {
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar3;
            uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar8[-1] == **(int **)(_UNK_01cf5038 + 0x1cf4dd0)) {
                  puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cf4e18;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cf5038 + 0x1cf4dd0),0);
LAB_01cf4e18:
            (*(code *)*puVar4)(&uStack_30,piVar3,puVar4[1]);
            uVar1 = uStack_2c;
            uVar6 = uStack_30;
            iVar2 = *(int *)(param_1 + 0x28);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x02450cc8(iVar2,uVar6,&iStack_28,
                                    **(undefined4 **)(_UNK_01cf503c + 0x1cf4e50));
            iVar2 = iStack_28;
            if (iVar5 != 0) {
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              *(undefined4 *)(iVar2 + 0xc) = uVar1;
            }
            goto LAB_01cf4d40;
          }
          if (piVar3 != (int *)0x0) {
            iVar2 = *piVar3;
            uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar7 != 0) {
              piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_01cf5040 + 0x1cf4ea0)) {
                  puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
                  goto LAB_01cf4ee8;
                }
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cf5040 + 0x1cf4ea0),0);
LAB_01cf4ee8:
            (*(code *)*puVar4)(piVar3,puVar4[1]);
          }
          uVar6 = *(undefined4 *)(pcVar9 + 0x14);
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(pcVar9 + 0x10);
          *(undefined4 *)(param_1 + 0x34) = uVar6;
          func_0x01cf72c4(param_1);
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x97d8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$FillData RVA 0x1ce5048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf5048(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar2 = (char *)(_UNK_01cf54f4 + 0x1cf5064);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf54f8 + 0x1cf5078));
    func_0x01384978(*(undefined4 *)(_UNK_01cf54fc + 0x1cf5084));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5500 + 0x1cf5090));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5504 + 0x1cf509c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5508 + 0x1cf50a8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf550c + 0x1cf50b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5510 + 0x1cf50c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5514 + 0x1cf50cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5518 + 0x1cf50d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf551c + 0x1cf50e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5520 + 0x1cf50f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5524 + 0x1cf50fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5528 + 0x1cf5108));
    func_0x01384978(*(undefined4 *)(_UNK_01cf552c + 0x1cf5114));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5530 + 0x1cf5120));
    *pcVar2 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iVar1 = func_0x0229f06c(0x97d9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01cf5534 + 0x1cf51b0));
    func_0x0177cb34(iVar1,0);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02450598(&uStack_70,iVar3,**(undefined4 **)(_UNK_01cf5538 + 0x1cf51f4));
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    puVar7 = *(undefined4 **)(_UNK_01cf553c + 0x1cf5220);
    puVar8 = *(undefined4 **)(_UNK_01cf5540 + 0x1cf5228);
    while (iVar3 = func_0x01475638(&uStack_40,*puVar7), uVar4 = uStack_34, iVar3 != 0) {
      uVar5 = (undefined4)uStack_30;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0x18);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0345f108(iVar3,uVar4,uVar5,*puVar8);
    }
    func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01cf5544 + 0x1cf527c));
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    *(undefined4 *)(iVar1 + 0x14) = uVar5;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_2 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_01cf554c + 0x1cf52c8);
    *(int *)(iVar3 + 0x78) = iVar1;
    iVar1 = func_0x01384be4(*puVar7);
    func_0x01780e3c(iVar1,0);
    if (*(int *)(param_1 + 0x28) != 0) {
      func_0x02450134(&uStack_70,*(int *)(param_1 + 0x28),
                      **(undefined4 **)(_UNK_01cf5550 + 0x1cf52fc));
      uStack_58 = uStack_70;
      uStack_54 = uStack_6c;
      uStack_50 = uStack_68;
      uStack_4c = uStack_64;
      uStack_48 = uStack_60;
      puVar7 = *(undefined4 **)(_UNK_01cf5554 + 0x1cf5328);
      while (iVar3 = func_0x01475878(&uStack_58,*puVar7), uVar4 = uStack_4c, iVar3 != 0) {
        iVar3 = (int)uStack_48;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar1 + 0x18);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0345f108(iVar6,uVar4,uVar5,*puVar8);
      }
      func_0x0245013c(&uStack_58,**(undefined4 **)(_UNK_01cf555c + 0x1cf538c));
    }
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    *(undefined4 *)(iVar1 + 0x14) = uVar5;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x24);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar3 + 0x5c) = iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x97d9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$MarkTagExpire RVA 0x1ce5568 =====

void FUN_01cf5568(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xec3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xec3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(char *)(param_1 + 9) = (char)param_2;
  return;
}



// ===== FAT.UserGradeMan$$OnReceiveUserTagInfo RVA 0x1ce55c4 =====

/* WARNING: Possible PIC construction at 0x01cf7028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cf702c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf55c4(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = func_0x0229f06c(0xea6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xea6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  func_0x01cf5638(param_1,param_2);
  func_0x01cf5b80(param_1);
  pcVar5 = (char *)(_UNK_01cf5ecc + 0x1cf5e2c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf5ed0 + 0x1cf5e40));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xeaa,0);
  if (iVar2 == 0) {
    if (((*(int *)(param_1 + 0x28) == 0) ||
        (iVar2 = func_0x02450200(*(int *)(param_1 + 0x28),
                                 **(undefined4 **)(_UNK_01cf5ed4 + 0x1cf5ea4)), iVar2 < 1)) ||
       (*(int *)(param_1 + 0x2c) == 0)) {
      return;
    }
    unaff_r4 = (char *)(_UNK_01cf727c + 0x1cf6f54);
    if (*unaff_r4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cf7280 + 0x1cf6f68));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7284 + 0x1cf6f74));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7288 + 0x1cf6f80));
      func_0x01384978(*(undefined4 *)(_UNK_01cf728c + 0x1cf6f8c));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7290 + 0x1cf6f98));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7294 + 0x1cf6fa4));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7298 + 0x1cf6fb0));
      func_0x01384978(*(undefined4 *)(_UNK_01cf729c + 0x1cf6fbc));
      func_0x01384978(*(undefined4 *)(_UNK_01cf72a0 + 0x1cf6fc8));
      *unaff_r4 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_2c = 0;
    iStack_30 = 0;
    iVar2 = func_0x0229f06c(0xeab,0);
    if (iVar2 == 0) {
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf72a4 + 0x1cf7040));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01c359e8(iVar2,0);
      iVar2 = (int)((ulonglong)uVar12 >> 0x20);
      uVar3 = (uint)uVar12;
      if ((*(int *)(param_1 + 0x34) < (int)(uint)(*(int *)(param_1 + 0x30) == 0)) ||
         (iVar6 = *(int *)(param_1 + 0x44), bVar11 = uVar3 < *(uint *)(param_1 + 0x40),
         (int)(iVar2 - (iVar6 + (uint)bVar11)) < 0 ==
         (SBORROW4(iVar2,iVar6) != SBORROW4(iVar2 - iVar6,(uint)bVar11)))) {
        *(undefined8 *)(param_1 + 0x30) = uVar12;
        func_0x01cf72c4(param_1);
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar1 = *(int *)(iVar6 + 0x214) / 1000;
        *(uint *)(param_1 + 0x38) = uVar3 + uVar1;
        *(uint *)(param_1 + 0x3c) = iVar2 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
        func_0x019b2d28(0);
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02450134(&uStack_40,iVar2,**(undefined4 **)(_UNK_01cf72a8 + 0x1cf7124));
        puVar9 = *(undefined4 **)(_UNK_01cf72ac + 0x1cf713c);
        puVar8 = *(undefined4 **)(_UNK_01cf72b0 + 0x1cf7144);
        while (iVar6 = func_0x01475878(&uStack_40,*puVar9), iVar2 = iStack_30, iVar6 != 0) {
          uVar7 = func_0x01cf5fc8(param_1,uStack_34);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar2 + 8);
          iVar6 = *(int *)(param_1 + 0x2c);
          *(undefined4 *)(iVar2 + 0xc) = uVar7;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar4 = *(undefined4 *)(iVar10 + 0x24);
          uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01cf72b4 + 0x1cf7198));
          func_0x03ccab14(uVar7,param_1,*puVar8,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x020c8588(iVar6,uVar4,uVar7,0);
        }
        func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01cf72b8 + 0x1cf71e0));
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xeab,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cf702c;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x0229f13c(0xeaa,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(char **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar6 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar6,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.UserGradeMan$$TryApplyUserTagInfo RVA 0x1ce5638 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Removing unreachable block (ram,0x01cf5a2c) */
/* WARNING: Removing unreachable block (ram,0x01cf5a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf5638(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int unaff_r4;
  char *pcVar8;
  int unaff_r5;
  int iVar9;
  int iVar10;
  undefined4 unaff_r6;
  undefined4 uVar11;
  int unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 *puVar12;
  undefined4 unaff_r10;
  int *piVar13;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01cf5b20 + 0x1cf5654);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b24 + 0x1cf5668));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b28 + 0x1cf5674));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b2c + 0x1cf5680));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b30 + 0x1cf568c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b34 + 0x1cf5698));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b38 + 0x1cf56a4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b3c + 0x1cf56b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b40 + 0x1cf56bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b44 + 0x1cf56c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b48 + 0x1cf56d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b4c + 0x1cf56e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5b50 + 0x1cf56ec));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xea7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xea7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0345fcc8(iVar1,**(undefined4 **)(_UNK_01cf5b54 + 0x1cf5764));
    if (0 < iVar1) {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined1 *)(param_1 + 8) = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x024509cc(iVar1,**(undefined4 **)(_UNK_01cf5b58 + 0x1cf5798));
      iVar1 = *(int *)(param_2 + 0x18);
      iStack_34 = param_2;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_01cf5b5c + 0x1cf57c0));
      piVar13 = *(int **)(_UNK_01cf5b60 + 0x1cf57dc);
      puVar12 = *(undefined4 **)(_UNK_01cf5b64 + 0x1cf57e4);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar13) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01cf583c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0);
LAB_01cf583c:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) goto LAB_01cf59ac;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01cf5b68 + 0x1cf5870)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01cf58b8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf5b68 + 0x1cf5870),0);
LAB_01cf58b8:
        (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
        uVar7 = uStack_2c;
        uVar11 = uStack_30;
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0245025c(iVar1,uVar11,uVar7,*puVar12);
      } while( true );
    }
  }
  iVar9 = **(int **)(_UNK_01cf5b74 + 0x1cf5908);
  *(undefined1 *)(param_1 + 8) = 1;
  iVar1 = *(int *)(iVar9 + 0x1c);
  if (iVar1 == 0) {
    func_0x0140024c(iVar9);
    iVar1 = *(int *)(iVar9 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  param_2 = **(int **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_01cf5b78 + 0x1cf5970) + 0x74) == 0) {
    func_0x01384ab4(**(int **)(_UNK_01cf5b78 + 0x1cf5970));
  }
  param_1 = **(int **)(_UNK_01cf5b7c + 0x1cf59a0);
  pcVar8 = (char *)(_UNK_028c2fe8 + 0x28c2f40);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c2fec + 0x28c2f54),param_2,0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(**(int **)(_UNK_028c2ff0 + 0x28c2fb0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2be4(param_2);
  iVar1 = func_0x046727d0(param_1,param_2,0);
  pcVar8 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar8 = '\x01';
  }
  iVar9 = func_0x0229f06c(0x14,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x14,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    goto LAB_02174038;
  }
  piVar2 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar9 = *piVar2;
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x01384ab4();
    iVar9 = *piVar2;
  }
  if (**(int **)(iVar9 + 0x5c) < 1) {
LAB_028c2848:
    iVar4 = iVar1;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar9 = *piVar2;
    }
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar2;
    }
    iVar10 = **(int **)(iVar9 + 0x5c);
    if (iVar4 <= iVar10) goto LAB_028c2848;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar10 = **(int **)(*piVar2 + 0x5c);
    }
    iVar9 = *(int *)(iVar1 + 8);
    if (iVar9 < 1) {
      return;
    }
    unaff_r6 = 0;
    unaff_r5 = iVar10;
    if (iVar9 < iVar10) {
      unaff_r5 = iVar9;
    }
    unaff_r7 = func_0x04673af4(iVar1,0,unaff_r5,0);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar4 = unaff_r7;
    unaff_r4 = iVar1;
    unaff_r8 = 4;
    unaff_r9 = piVar2;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
  pcVar8 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return;
  }
  iVar9 = func_0x0229f13c(0x15,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r5 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  iVar1 = iVar4;
LAB_02174038:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar1,0);
  iVar4 = *(int *)(iVar9 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  iVar4 = *(int *)(iVar9 + 8);
  uVar11 = *(undefined4 *)(iVar9 + 0xc);
  iVar1 = *(int *)(iVar9 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar1 == 0) {
    uVar7 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar7);
  return;
LAB_01cf59ac:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_01cf5b6c + 0x1cf59cc)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
          goto LAB_01cf5a14;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf5b6c + 0x1cf59cc),0);
LAB_01cf5a14:
    (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  func_0x01cf5ed8(param_1);
  return;
}



// ===== FAT.UserGradeMan$$_TryApplyUseTagDebugInfo RVA 0x1ce5b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf5b80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01cf5dd8 + 0x1cf5b98);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf5ddc + 0x1cf5bac));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5de0 + 0x1cf5bb8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5de4 + 0x1cf5bc4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5de8 + 0x1cf5bd0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5dec + 0x1cf5bdc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5df0 + 0x1cf5be8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5df4 + 0x1cf5bf4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf5df8 + 0x1cf5c00));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar3 = func_0x0229f06c(0xea9,0);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450594(iVar3,**(undefined4 **)(_UNK_01cf5dfc + 0x1cf5c94));
      if (iVar3 < 1) {
        iVar3 = *(int *)(param_1 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02450598(&uStack_58,iVar3,**(undefined4 **)(_UNK_01cf5e00 + 0x1cf5cc8));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar5 = *(undefined4 **)(_UNK_01cf5e04 + 0x1cf5cf4);
        puVar6 = *(undefined4 **)(_UNK_01cf5e08 + 0x1cf5cfc);
        while (iVar3 = func_0x01475638(&uStack_40,*puVar5), uVar1 = uStack_34, iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x24);
          uVar2 = (undefined4)uStack_30;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x024509a0(iVar3,uVar1,uVar2,*puVar6);
        }
        func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01cf5e0c + 0x1cf5d44));
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xea9,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar3,param_1,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$_TryReqAPIInfo RVA 0x1ce5e18 =====

/* WARNING: Possible PIC construction at 0x01cf7028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cf702c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf5e18(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *unaff_r4;
  int unaff_r5;
  char *pcVar6;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01cf5ecc + 0x1cf5e2c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf5ed0 + 0x1cf5e40));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xeaa,0);
  if (iVar2 == 0) {
    if (((*(int *)(param_1 + 0x28) == 0) ||
        (iVar2 = func_0x02450200(*(int *)(param_1 + 0x28),
                                 **(undefined4 **)(_UNK_01cf5ed4 + 0x1cf5ea4)), iVar2 < 1)) ||
       (*(int *)(param_1 + 0x2c) == 0)) {
      return;
    }
    unaff_r4 = (char *)(_UNK_01cf727c + 0x1cf6f54);
    if (*unaff_r4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cf7280 + 0x1cf6f68));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7284 + 0x1cf6f74));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7288 + 0x1cf6f80));
      func_0x01384978(*(undefined4 *)(_UNK_01cf728c + 0x1cf6f8c));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7290 + 0x1cf6f98));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7294 + 0x1cf6fa4));
      func_0x01384978(*(undefined4 *)(_UNK_01cf7298 + 0x1cf6fb0));
      func_0x01384978(*(undefined4 *)(_UNK_01cf729c + 0x1cf6fbc));
      func_0x01384978(*(undefined4 *)(_UNK_01cf72a0 + 0x1cf6fc8));
      *unaff_r4 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_2c = 0;
    iStack_30 = 0;
    iVar2 = func_0x0229f06c(0xeab,0);
    if (iVar2 == 0) {
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf72a4 + 0x1cf7040));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01c359e8(iVar2,0);
      iVar2 = (int)((ulonglong)uVar12 >> 0x20);
      uVar3 = (uint)uVar12;
      if ((*(int *)(param_1 + 0x34) < (int)(uint)(*(int *)(param_1 + 0x30) == 0)) ||
         (iVar4 = *(int *)(param_1 + 0x44), bVar11 = uVar3 < *(uint *)(param_1 + 0x40),
         (int)(iVar2 - (iVar4 + (uint)bVar11)) < 0 ==
         (SBORROW4(iVar2,iVar4) != SBORROW4(iVar2 - iVar4,(uint)bVar11)))) {
        *(undefined8 *)(param_1 + 0x30) = uVar12;
        func_0x01cf72c4(param_1);
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar1 = *(int *)(iVar4 + 0x214) / 1000;
        *(uint *)(param_1 + 0x38) = uVar3 + uVar1;
        *(uint *)(param_1 + 0x3c) = iVar2 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
        func_0x019b2d28(0);
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02450134(&uStack_40,iVar2,**(undefined4 **)(_UNK_01cf72a8 + 0x1cf7124));
        puVar9 = *(undefined4 **)(_UNK_01cf72ac + 0x1cf713c);
        puVar8 = *(undefined4 **)(_UNK_01cf72b0 + 0x1cf7144);
        while (iVar4 = func_0x01475878(&uStack_40,*puVar9), iVar2 = iStack_30, iVar4 != 0) {
          uVar7 = func_0x01cf5fc8(param_1,uStack_34);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar2 + 8);
          iVar4 = *(int *)(param_1 + 0x2c);
          *(undefined4 *)(iVar2 + 0xc) = uVar7;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar5 = *(undefined4 *)(iVar10 + 0x24);
          uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01cf72b4 + 0x1cf7198));
          func_0x03ccab14(uVar7,param_1,*puVar8,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x020c8588(iVar4,uVar5,uVar7,0);
        }
        func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01cf72b8 + 0x1cf71e0));
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xeab,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cf702c;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x0229f13c(0xeaa,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(char **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  return;
}



// ===== FAT.UserGradeMan$$_RefreshTagExpireTs RVA 0x1ce5ed8 =====

void FUN_01cf5ed8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_r2;
  int extraout_r3;
  uint uVar3;
  int iVar4;
  
  iVar1 = func_0x0229f06c(0xea8,0);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x498);
    uVar3 = *(uint *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x14);
    uVar2 = iVar1 * 0xe10;
    func_0x01458584(uVar3 + iVar1 * -0xe10,iVar4 - (((int)uVar2 >> 0x1f) + (uint)(uVar3 < uVar2)),
                    0x15180,0);
    *(uint *)(param_1 + 0x18) = (uVar3 - extraout_r2) + 0x15180;
    *(uint *)(param_1 + 0x1c) =
         (iVar4 - (extraout_r3 + (uint)(uVar3 < extraout_r2))) +
         (uint)(0xfffeae7f < uVar3 - extraout_r2);
  }
  else {
    iVar1 = func_0x0229f13c(0xea8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02197394(iVar1,param_1,param_3,param_4,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$GetUserGradeValue RVA 0x1ce5fc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cf5fc8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01cf6194 + 0x1cf5fe4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf6198 + 0x1cf5ff8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf619c + 0x1cf6004));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x2fb,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450590(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01cf61a0 + 0x1cf60ac))
      ;
      if (iVar1 == 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01ca8804(iVar1,param_2,0);
        uStack_14 = 0;
        if (iVar1 != 0) {
          uStack_14 = *(undefined4 *)(iVar1 + 0x1c);
        }
      }
      else {
        iVar1 = func_0x01cf62cc(param_1);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x28);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x02450cc8(iVar1,param_2,&iStack_18,
                                  **(undefined4 **)(_UNK_01cf61a4 + 0x1cf60f0));
          iVar1 = iStack_18;
          if (iVar2 != 0) {
            if (iStack_18 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar2 = iStack_18;
            if (*(char *)(iVar1 + 0x21) != '\0') {
              if (iStack_18 == 0) {
                func_0x01384bf0();
              }
              uStack_14 = *(undefined4 *)(iVar2 + 0xc);
            }
          }
        }
      }
    }
    else {
      uStack_14 = func_0x01cf61a8(param_1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2fb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.UserGradeMan$$_GetDebugGetUserGradeValue RVA 0x1ce61a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cf61a8(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01cf62c0 + 0x1cf61c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf62c4 + 0x1cf61d8));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x2fc,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450590(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01cf62c8 + 0x1cf6258));
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ca8804(iVar1,param_2,0);
      uStack_14 = 0;
      if (iVar1 != 0) {
        uStack_14 = *(undefined4 *)(iVar1 + 0x1c);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2fc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.UserGradeMan$$_CheckApiUsable RVA 0x1ce62cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cf62cc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 uVar10;
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
  
  pcVar5 = (char *)(_UNK_01cf63f4 + 0x1cf62e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf63f8 + 0x1cf62f4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf63fc + 0x1cf6300));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2fe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (iVar1 = func_0x02450200(*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_01cf6400 + 0x1cf6364))
     , 0 < iVar1)) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf6404 + 0x1cf6380));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x01c359e8(iVar1,0);
    iVar1 = (int)((ulonglong)uVar10 >> 0x20);
    uVar2 = (uint)uVar10;
    uVar3 = *(uint *)(param_1 + 0x38);
    iVar7 = *(int *)(param_1 + 0x3c);
    if ((iVar7 < (int)(uint)(uVar3 == 0)) ||
       ((int)(iVar7 - (iVar1 + (uint)(uVar3 < uVar2))) < 0 ==
        (SBORROW4(iVar7,iVar1) != SBORROW4(iVar7 - iVar1,(uint)(uVar3 < uVar2))))) {
      iVar6 = *(int *)(param_1 + 0x44);
      bVar9 = uVar2 < *(uint *)(param_1 + 0x40);
      return (uint)((int)(iVar7 - (iVar1 + (uint)(uVar3 < uVar2))) < 0 !=
                    (SBORROW4(iVar7,iVar1) != SBORROW4(iVar7 - iVar1,(uint)(uVar3 < uVar2))) &&
                   (int)(iVar1 - (iVar6 + (uint)bVar9)) < 0 !=
                   (SBORROW4(iVar1,iVar6) != SBORROW4(iVar1 - iVar6,(uint)bVar9)));
    }
  }
  return 0;
}



// ===== FAT.UserGradeMan$$GetTargetConfigDataId RVA 0x1ce6408 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cf6408(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01cf66dc + 0x1cf6424);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf66e0 + 0x1cf6438));
    func_0x01384978(*(undefined4 *)(_UNK_01cf66e4 + 0x1cf6444));
    func_0x01384978(*(undefined4 *)(_UNK_01cf66e8 + 0x1cf6450));
    func_0x01384978(*(undefined4 *)(_UNK_01cf66ec + 0x1cf645c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf66f0 + 0x1cf6468));
    func_0x01384978(*(undefined4 *)(_UNK_01cf66f4 + 0x1cf6474));
    func_0x01384978(*(undefined4 *)(_UNK_01cf66f8 + 0x1cf6480));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x2f8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca87a0(iVar1,param_2,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      uVar2 = *(undefined4 *)(iVar1 + 0x18);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01ca873c(iVar3,uVar2,0);
      uVar2 = 0;
      if (iVar3 != 0) {
        iVar7 = *(int *)(iVar3 + 0x1c);
        uVar2 = **(undefined4 **)(_UNK_01cf66fc + 0x1cf6584);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar7 + 0xc);
        if (0 < iVar8) {
          iVar6 = 0;
          puVar9 = *(undefined4 **)(_UNK_01cf6700 + 0x1cf65b8);
          puVar10 = *(undefined4 **)(_UNK_01cf6704 + 0x1cf65c0);
          do {
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x0364c9b8(iVar7,iVar6,*puVar9);
            uStack_30 = FUN_01cf5fc8(param_1,uVar4);
            if (iVar6 == 0) {
              uVar4 = func_0x01384abc(*puVar10,&uStack_30);
              uVar2 = func_0x02451a98(uVar2,uVar4,0);
            }
            else {
              uVar4 = func_0x01384abc(*puVar10,&uStack_30);
              uVar2 = func_0x02450fc4(uVar2,**(undefined4 **)(_UNK_01cf6708 + 0x1cf6614),uVar4,0);
            }
            iVar6 = iVar6 + 1;
          } while (iVar8 != iVar6);
        }
        iVar3 = *(int *)(iVar3 + 0x18);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0346dbf4(iVar3,uVar2,&uStack_28,**(undefined4 **)(_UNK_01cf670c + 0x1cf667c))
        ;
        uVar4 = uStack_28;
        uVar2 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0345efbc(iVar1,uVar4,&uStack_2c,
                                  **(undefined4 **)(_UNK_01cf6710 + 0x1cf66bc));
          uVar2 = uStack_2c;
          if (iVar1 == 0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2f8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.UserGradeMan$$_CheckServerTagExpire RVA 0x1ce6714 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cf6714(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
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
  
  pcVar3 = (char *)(_UNK_01cf6804 + 0x1cf6728);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf6808 + 0x1cf673c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x20a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x20a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (((*(char *)(param_1 + 0x20) == '\0') && (uVar4 = 1, *(char *)(param_1 + 9) != '\0')) &&
     (*(char *)(param_1 + 8) == '\0')) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf680c + 0x1cf67c8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x01c359e8(iVar1,0);
    iVar1 = (int)((ulonglong)uVar8 >> 0x20);
    iVar5 = *(int *)(param_1 + 0x1c);
    bVar7 = (uint)uVar8 < *(uint *)(param_1 + 0x18);
    bVar7 = (int)(iVar1 - (iVar5 + (uint)bVar7)) < 0 ==
            (SBORROW4(iVar1,iVar5) != SBORROW4(iVar1 - iVar5,(uint)bVar7));
    uVar4 = (uint)bVar7;
    *(bool *)(param_1 + 8) = bVar7;
  }
  return uVar4;
}



// ===== FAT.UserGradeMan$$get_IsIgnoreTagExpire RVA 0x1ce6810 =====

undefined1 FUN_01cf6810(int param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// ===== FAT.UserGradeMan$$set_IsIgnoreTagExpire RVA 0x1ce6818 =====

void FUN_01cf6818(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== FAT.UserGradeMan$$DebugSetIgnoreTagExpire RVA 0x1ce6820 =====

void FUN_01cf6820(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x97da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x97da,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) ^ 1;
  return;
}



// ===== FAT.UserGradeMan$$DebugChangeUserTag RVA 0x1ce687c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf687c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01cf6988 + 0x1cf689c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf698c + 0x1cf68b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6990 + 0x1cf68bc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x97dc,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    if (param_3 < 2) {
      param_3 = 1;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450998(iVar1,param_2,**(undefined4 **)(_UNK_01cf6994 + 0x1cf693c));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a8e0(iVar1,param_2,param_3,1,
                      *(undefined4 *)
                       (*(int *)(*(int *)(**(int **)(_UNK_01cf6998 + 0x1cf6970) + 0x10) + 0x60) +
                       0x88));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x97dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$DebugUserTagInfo RVA 0x1ce699c =====

/* WARNING: Removing unreachable block (ram,0x01cf6d1c) */
/* WARNING: Removing unreachable block (ram,0x01cf6c00) */
/* WARNING: Removing unreachable block (ram,0x01cf6c10) */
/* WARNING: Removing unreachable block (ram,0x01cf6d0c) */
/* WARNING: Removing unreachable block (ram,0x01cf6d18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cf699c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  pcVar4 = (char *)(_UNK_01cf6ed0 + 0x1cf69b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ed4 + 0x1cf69c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ed8 + 0x1cf69d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6edc + 0x1cf69e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ee0 + 0x1cf69ec));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ee4 + 0x1cf69f8));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ee8 + 0x1cf6a04));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6eec + 0x1cf6a10));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ef0 + 0x1cf6a1c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ef4 + 0x1cf6a28));
    func_0x01384978(*(undefined4 *)(_UNK_01cf6ef8 + 0x1cf6a34));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x97dd,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_01cf6efc + 0x1cf6ab8);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar1,&piStack_28,**(undefined4 **)(_UNK_01cf6f00 + 0x1cf6af4));
    if (*(char *)(param_1 + 0x20) == '\0') {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_60,iVar1,**(undefined4 **)(_UNK_01cf6f18 + 0x1cf6c38));
      uStack_48 = uStack_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      puVar8 = *(undefined4 **)(_UNK_01cf6f1c + 0x1cf6c70);
      puVar7 = *(undefined4 **)(_UNK_01cf6f20 + 0x1cf6c78);
      puVar6 = *(undefined4 **)(_UNK_01cf6f24 + 0x1cf6c80);
      while (iVar1 = func_0x01475638(&uStack_48,*puVar8), piVar5 = piStack_28, iVar1 != 0) {
        uVar2 = (undefined4)uStack_38;
        uStack_60 = uStack_3c;
        uVar3 = func_0x01384abc(*puVar7,&uStack_60);
        uStack_64 = uVar2;
        uVar2 = func_0x01384abc(*puVar7,&uStack_64);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02451a3c(piVar5,*puVar6,uVar3,uVar2,0);
      }
      func_0x0245059c(&uStack_48,**(undefined4 **)(_UNK_01cf6f2c + 0x1cf6cfc));
    }
    else {
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_60,iVar1,**(undefined4 **)(_UNK_01cf6f04 + 0x1cf6b28));
      uStack_48 = uStack_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      puVar7 = *(undefined4 **)(_UNK_01cf6f08 + 0x1cf6b60);
      puVar8 = *(undefined4 **)(_UNK_01cf6f0c + 0x1cf6b68);
      puVar6 = *(undefined4 **)(_UNK_01cf6f10 + 0x1cf6b70);
      while (iVar1 = func_0x01475638(&uStack_48,*puVar7), piVar5 = piStack_28, iVar1 != 0) {
        uVar2 = (undefined4)uStack_38;
        uStack_60 = uStack_3c;
        uVar3 = func_0x01384abc(*puVar8,&uStack_60);
        uStack_64 = uVar2;
        uVar2 = func_0x01384abc(*puVar8,&uStack_64);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02451a3c(piVar5,*puVar6,uVar3,uVar2,0);
      }
      func_0x0245059c(&uStack_48,**(undefined4 **)(_UNK_01cf6f14 + 0x1cf6bec));
    }
    piVar5 = piStack_28;
    if (piStack_28 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar2 = (**(code **)(iVar1 + 0xd8))(piVar5,*(undefined4 *)(iVar1 + 0xdc));
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x97dd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.UserGradeMan.UserGardeAPIData$$.ctor RVA 0x1ce6f34 =====

void FUN_01cf6f34(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.UserGradeMan$$_RefreshAPIExpireTs RVA 0x1ce6f3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf6f3c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01cf727c + 0x1cf6f54);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf7280 + 0x1cf6f68));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7284 + 0x1cf6f74));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7288 + 0x1cf6f80));
    func_0x01384978(*(undefined4 *)(_UNK_01cf728c + 0x1cf6f8c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7290 + 0x1cf6f98));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7294 + 0x1cf6fa4));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7298 + 0x1cf6fb0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf729c + 0x1cf6fbc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf72a0 + 0x1cf6fc8));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iVar2 = func_0x0229f06c(0xeab,0);
  if (iVar2 == 0) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf72a4 + 0x1cf7040));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar12 = func_0x01c359e8(iVar2,0);
    iVar2 = (int)((ulonglong)uVar12 >> 0x20);
    uVar3 = (uint)uVar12;
    if ((*(int *)(param_1 + 0x34) < (int)(uint)(*(int *)(param_1 + 0x30) == 0)) ||
       (iVar5 = *(int *)(param_1 + 0x44), bVar11 = uVar3 < *(uint *)(param_1 + 0x40),
       (int)(iVar2 - (iVar5 + (uint)bVar11)) < 0 ==
       (SBORROW4(iVar2,iVar5) != SBORROW4(iVar2 - iVar5,(uint)bVar11)))) {
      *(undefined8 *)(param_1 + 0x30) = uVar12;
      func_0x01cf72c4(param_1);
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar1 = *(int *)(iVar5 + 0x214) / 1000;
      *(uint *)(param_1 + 0x38) = uVar3 + uVar1;
      *(uint *)(param_1 + 0x3c) = iVar2 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
      func_0x019b2d28(0);
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02450134(&uStack_40,iVar2,**(undefined4 **)(_UNK_01cf72a8 + 0x1cf7124));
      puVar9 = *(undefined4 **)(_UNK_01cf72ac + 0x1cf713c);
      puVar8 = *(undefined4 **)(_UNK_01cf72b0 + 0x1cf7144);
      while (iVar5 = func_0x01475878(&uStack_40,*puVar9), iVar2 = iStack_30, iVar5 != 0) {
        uVar4 = FUN_01cf5fc8(param_1,uStack_34);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar2 + 8);
        iVar5 = *(int *)(param_1 + 0x2c);
        *(undefined4 *)(iVar2 + 0xc) = uVar4;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar10 + 0x24);
        uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01cf72b4 + 0x1cf7198));
        func_0x03ccab14(uVar4,param_1,*puVar8,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x020c8588(iVar5,uVar7,uVar4,0);
      }
      func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01cf72b8 + 0x1cf71e0));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xeab,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$_CalAPIExpireTs RVA 0x1ce72c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf72c4(int param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  char extraout_r2;
  uint extraout_r2_00;
  int extraout_r3;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01cf75d0 + 0x1cf72dc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf75d4 + 0x1cf72f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cf75d8 + 0x1cf72fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cf75dc + 0x1cf7308));
    func_0x01384978(*(undefined4 *)(_UNK_01cf75e0 + 0x1cf7314));
    func_0x01384978(*(undefined4 *)(_UNK_01cf75e4 + 0x1cf7320));
    *pcVar8 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iVar4 = func_0x0229f06c(0xeac,0);
  if (iVar4 == 0) {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(param_1 + 0x28);
    iVar4 = *(int *)(iVar4 + 0x498);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x02450134(&uStack_40,iVar9,**(undefined4 **)(_UNK_01cf75e8 + 0x1cf73f0));
    puVar6 = *(undefined4 **)(_UNK_01cf75ec + 0x1cf7408);
    do {
      iVar5 = func_0x01475878(&uStack_40,*puVar6);
      iVar9 = iStack_30;
      if (iVar5 == 0) {
        func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01cf75f8 + 0x1cf74b4));
        return;
      }
      if (iStack_30 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x18);
    } while (iVar9 < 1);
    func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01cf75f0 + 0x1cf7450));
    if (iVar9 == 2) {
      lVar10 = func_0x01458584(*(uint *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0x15180,0);
      func_0x01458584((int)(lVar10 + 4),(int)((ulonglong)(lVar10 + 4) >> 0x20),7,0);
      cVar1 = '\b' - extraout_r2;
      iVar9 = (int)(((ulonglong)(uint)(int)cVar1 << 0x20) + (longlong)(int)cVar1 * -0x6db6db6d >>
                   0x20);
      uVar7 = ((iVar9 >> 2) - (iVar9 >> 0x1f)) * -7 + (int)cVar1;
      if ((uVar7 & 0xff) == 0) {
        uVar7 = 7;
      }
      uVar3 = lVar10 + (ulonglong)(uVar7 & 0xff);
      uVar2 = (uVar3 & 0xffffffff) * 0x15180;
      *(longlong *)(param_1 + 0x40) =
           (longlong)iVar4 * 0xe10 +
           ((ulonglong)(uint)((int)(uVar3 >> 0x20) * 0x15180 + (int)(uVar2 >> 0x20)) << 0x20 |
           uVar2 & 0xffffffff);
    }
    else if (iVar9 == 1) {
      uVar7 = *(uint *)(param_1 + 0x30);
      iVar9 = *(int *)(param_1 + 0x34);
      func_0x01458584(uVar7 + iVar4 * -0xe10,
                      iVar9 - ((iVar4 * 0xe10 >> 0x1f) + (uint)(uVar7 < (uint)(iVar4 * 0xe10))),
                      0x15180,0);
      *(uint *)(param_1 + 0x40) = (uVar7 + 0x15180) - extraout_r2_00;
      *(uint *)(param_1 + 0x44) =
           (iVar9 + (uint)(0xfffeae7f < uVar7)) -
           (extraout_r3 + (uint)(uVar7 + 0x15180 < extraout_r2_00));
    }
  }
  else {
    iVar4 = func_0x0229f13c(0xeac,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar4,param_1,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$_OnReqAPISuccess RVA 0x1ce7600 =====

/* WARNING: Removing unreachable block (ram,0x01cf7a10) */
/* WARNING: Removing unreachable block (ram,0x01cf7a1c) */
/* WARNING: Removing unreachable block (ram,0x01cf7b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01cf7600(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar9 = (char *)(_UNK_01cf7c94 + 0x1cf761c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf7c98 + 0x1cf7630));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7c9c + 0x1cf763c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7ca0 + 0x1cf7648));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7ca4 + 0x1cf7654));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7ca8 + 0x1cf7660));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7cac + 0x1cf766c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7cb0 + 0x1cf7678));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7cb4 + 0x1cf7684));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7cb8 + 0x1cf7690));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7cbc + 0x1cf769c));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7cc0 + 0x1cf76a8));
    *pcVar9 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xead,0);
  if (iVar1 == 0) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf7cc4 + 0x1cf7720));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 0;
    uVar14 = func_0x01c359e8(iVar1,0);
    iVar1 = (int)((ulonglong)uVar14 >> 0x20);
    uVar6 = *(uint *)(param_1 + 0x38);
    iVar7 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x38) = 0;
    bVar13 = uVar6 < (uint)uVar14;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if ((int)(iVar7 - (iVar1 + (uint)bVar13)) < 0 ==
        (SBORROW4(iVar7,iVar1) != SBORROW4(iVar7 - iVar1,(uint)bVar13))) {
      if (*(int *)(param_1 + 0x28) != 0) {
        func_0x02450134(&uStack_58,*(int *)(param_1 + 0x28),
                        **(undefined4 **)(_UNK_01cf7cc8 + 0x1cf7784));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        piVar11 = *(int **)(_UNK_01cf7ccc + 0x1cf77b4);
        piVar12 = *(int **)(_UNK_01cf7cd0 + 0x1cf77bc);
        while (iVar1 = func_0x01475878(&uStack_40,**(undefined4 **)(_UNK_01cf7cd4 + 0x1cf77c4)),
              iVar1 != 0) {
          iVar1 = (int)uStack_30;
          if ((int)uStack_30 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 8) == 0) {
LAB_01cf7a78:
            func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01cf7cf0 + 0x1cf7a84));
            uVar10 = 1;
            goto LAB_01cf7aec;
          }
          iVar7 = *(int *)(*(int *)(iVar1 + 8) + 0x28);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          piVar2 = (int *)func_0x0345f440(iVar7,**(undefined4 **)(_UNK_01cf7cd8 + 0x1cf7810));
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = *piVar2;
          uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_01cf7cdc + 0x1cf7838)) {
                puVar3 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xc0);
                goto LAB_01cf7880;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf7cdc + 0x1cf7838),0);
LAB_01cf7880:
          piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
          do {
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = *piVar2;
            uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar11) {
                  puVar3 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cf78f4;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01cf78f4:
            iVar7 = (*(code *)*puVar3)(piVar2,puVar3[1]);
            if (iVar7 == 0) {
              iVar7 = 0;
              break;
            }
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar4 = *piVar2;
            uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar12) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cf7970;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01cf7970:
            iVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          } while (iVar4 != param_2);
          if (piVar2 != (int *)0x0) {
            iVar4 = *piVar2;
            uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == **(int **)(_UNK_01cf7ce0 + 0x1cf79b0)) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cf79f8;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cf7ce0 + 0x1cf79b0),0);
LAB_01cf79f8:
            (*(code *)*puVar3)(piVar2,puVar3[1]);
          }
          if (iVar7 == 0) goto LAB_01cf7a78;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          *(int *)(iVar1 + 0xc) = param_2;
        }
        func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01cf7cf8 + 0x1cf7aa4));
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar10 = 0;
        func_0x01e2d040(iVar1,1,0);
      }
    }
    else {
      uVar10 = 1;
    }
LAB_01cf7aec:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = FUN_01cf5fc8(param_1,*(undefined4 *)(iVar1 + 0x39c));
    func_0x019b2df8(param_2,uVar10,uVar5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xead,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.UserGradeMan$$_CheckApiTagExpire RVA 0x1ce7cfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cf7cfc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
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
  
  pcVar5 = (char *)(_UNK_01cf7e28 + 0x1cf7d10);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf7e2c + 0x1cf7d24));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7e30 + 0x1cf7d30));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x20f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x20f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar4,0,0);
    uVar6 = func_0x0245496c(&uStack_30,0,0);
    return uVar6;
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (iVar1 = func_0x02450200(*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_01cf7e34 + 0x1cf7d98))
     , 0 < iVar1)) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01cf7e38 + 0x1cf7db4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    uVar11 = func_0x01c359e8(iVar1,0);
    iVar1 = (int)((ulonglong)uVar11 >> 0x20);
    uVar2 = (uint)uVar11;
    uVar3 = *(uint *)(param_1 + 0x38);
    iVar8 = *(int *)(param_1 + 0x3c);
    if ((iVar8 < (int)(uint)(uVar3 == 0)) ||
       ((int)(iVar8 - (iVar1 + (uint)(uVar3 < uVar2))) < 0 ==
        (SBORROW4(iVar8,iVar1) != SBORROW4(iVar8 - iVar1,(uint)(uVar3 < uVar2))))) {
      iVar7 = *(int *)(param_1 + 0x44);
      bVar10 = uVar2 < *(uint *)(param_1 + 0x40);
      uVar6 = (uint)((int)(iVar8 - (iVar1 + (uint)(uVar3 < uVar2))) < 0 ==
                     (SBORROW4(iVar8,iVar1) != SBORROW4(iVar8 - iVar1,(uint)(uVar3 < uVar2))) ||
                    (int)(iVar1 - (iVar7 + (uint)bVar10)) < 0 ==
                    (SBORROW4(iVar1,iVar7) != SBORROW4(iVar1 - iVar7,(uint)bVar10)));
    }
  }
  return uVar6;
}



// ===== FAT.UserGradeMan$$DebugResetApiExpireTs RVA 0x1ce7e3c =====

void FUN_01cf7e3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x97de,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x97de,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ===== FAT.UserGradeMan$$set_DebugDelayTime RVA 0x1ce7e98 =====

void FUN_01cf7e98(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.UserGradeMan$$get_DebugDelayTime RVA 0x1ce7ea0 =====

undefined4 FUN_01cf7ea0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.UserGradeMan$$DebugSetAPIDelayTime RVA 0x1ce7ea8 =====

void FUN_01cf7ea8(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x97df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x97df,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (0.0 < param_2) {
    *(float *)(param_1 + 0x48) = param_2;
  }
  return;
}



// ===== FAT.UserGradeMan$$.ctor RVA 0x1ce7f10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf7f10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01cf7fa4 + 0x1cf7f24);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf7fa8 + 0x1cf7f38));
    func_0x01384978(*(undefined4 *)(_UNK_01cf7fac + 0x1cf7f44));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_01cf7fb0 + 0x1cf7f5c);
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = func_0x01384be4(*puVar4);
  puVar5 = *(undefined4 **)(_UNK_01cf7fb4 + 0x1cf7f74);
  func_0x024509b4(uVar1,*puVar5);
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x024509b4(uVar1,*puVar5);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


