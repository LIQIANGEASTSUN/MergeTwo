/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityTransit$$Enter RVA 0x2b47d14 =====

void FUN_02b57d14(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1720,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b57dac(param_1,*(undefined4 *)(param_2 + 0xc),param_4,param_3,param_5);
  }
  else {
    iVar1 = func_0x0229f13c(0x1720,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d3c00(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ActivityTransit$$Enter RVA 0x2b47dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b57dac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02b57f78 + 0x2b57dcc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b57f7c + 0x2b57de4));
    func_0x01384978(*(undefined4 *)(_UNK_02b57f80 + 0x2b57df0));
    func_0x01384978(*(undefined4 *)(_UNK_02b57f84 + 0x2b57dfc));
    func_0x01384978(*(undefined4 *)(_UNK_02b57f88 + 0x2b57e08));
    func_0x01384978(*(undefined4 *)(_UNK_02b57f8c + 0x2b57e14));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1721,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b57f90 + 0x2b57e7c));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_02b57f94 + 0x2b57ea4);
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar3 = func_0x034aaa34(*puVar2);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x01eeb900(iVar3,0,0);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xfc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e8007c(iVar3,1,0,0);
    iVar3 = *(int *)(**(int **)(_UNK_02b57f98 + 0x2b57f1c) + 0x5c);
    puVar2 = *(undefined4 **)(_UNK_02b57f9c + 0x2b57f2c);
    *(undefined4 *)(iVar3 + 4) = param_2;
    *(undefined4 *)(iVar3 + 8) = param_4;
    uVar4 = func_0x01384be4(*puVar2);
    func_0x0478dedc(uVar4,iVar1,**(undefined4 **)(_UNK_02b57fa0 + 0x2b57f50),0);
    func_0x027cefb0(param_2,uVar4,param_5,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x1721,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02178e2c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ActivityTransit.<>c__DisplayClass4_0$$.ctor RVA 0x2b47fa4 =====

void FUN_02b57fa4(void)

{
  return;
}



// ===== FAT.ActivityTransit$$Exit RVA 0x2b47fac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b57fac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_02b5814c + 0x2b57fcc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b58150 + 0x2b57fe4));
    func_0x01384978(*(undefined4 *)(_UNK_02b58154 + 0x2b57ff0));
    func_0x01384978(*(undefined4 *)(_UNK_02b58158 + 0x2b57ffc));
    func_0x01384978(*(undefined4 *)(_UNK_02b5815c + 0x2b58008));
    func_0x01384978(*(undefined4 *)(_UNK_02b58160 + 0x2b58014));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x18b7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b58164 + 0x2b58078));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_02b58168 + 0x2b580a0);
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(char *)(iVar1 + 0xc) = (char)param_4;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar4 = func_0x034aaa34(uVar3);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01eeac9c(iVar4,uVar3,0);
    if (iVar4 == 0) {
      piVar6 = *(int **)(_UNK_02b5816c + 0x2b580ec);
      uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4);
      uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02b58170 + 0x2b580fc));
      func_0x0478dedc(uVar3,iVar1,**(undefined4 **)(_UNK_02b58174 + 0x2b5811c),0);
      func_0x027cefb0(uVar5,uVar3,0,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x18b7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b4e8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityTransit.<>c__DisplayClass5_0$$.ctor RVA 0x2b48178 =====

void FUN_02b58178(void)

{
  return;
}



// ===== FAT.ActivityTransit.<>c__DisplayClass4_0$$<Enter>b__0 RVA 0x2b48180 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b58180(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
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
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02b58304 + 0x2b58194);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b58308 + 0x2b581a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b5830c + 0x2b581b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b58310 + 0x2b581c0));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_02b58314 + 0x2b581d4));
  piVar10 = *(int **)(_UNK_02b58318 + 0x2b581e8);
  iVar5 = *piVar10;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar10;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x3c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01eea2b8(iVar4,uVar8,0);
  piVar9 = *(int **)(_UNK_02b5831c + 0x2b58230);
  iVar4 = *(int *)(*(int *)(*piVar10 + 0x5c) + 0x60);
  **(undefined1 **)(*piVar9 + 0x5c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01ef5998(iVar4,0);
  if (**(char **)(*piVar9 + 0x5c) == '\0') {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xe4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x01d7644c(iVar4,0);
  }
  else {
    iVar4 = *piVar10;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar10;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x3c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x01ef5998(iVar4,0);
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0x1724,0,0);
  if (iVar2 == 0) {
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar4 + 0xc);
    pcVar7 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar7 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x13da,0);
    if (iVar4 == 0) {
      iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
      piVar10 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar5 != 0) &&
         (iVar3 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar3 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if (piVar10[3] == 0) {
        func_0x01384bf4();
      }
      piVar10[4] = iVar5;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar4,iVar2,piVar10,0);
      pcVar7 = (char *)(_UNK_019a8b30 + 0x19a88e4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
        func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
        *pcVar7 = '\x01';
      }
      uStack_24 = 0;
      uStack_28 = 0;
      iVar4 = func_0x0229f06c(0x94b,0);
      if (iVar4 == 0) {
        piVar10 = *(int **)(_UNK_019a8b4c + 0x19a8998);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x02b489c0(&uStack_38,iVar5,0);
        uVar6 = uStack_34;
        uVar8 = uStack_38;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar4 + 0x54) = uStack_30;
        *(undefined4 *)(iVar4 + 0x48) = uVar8;
        *(undefined4 *)(iVar4 + 0x4c) = uVar6;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x02b3c4a4(iVar5,0);
        *(undefined4 *)(iVar4 + 0x50) = uVar8;
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 8) == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024500d4(&uStack_38,0);
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uVar8 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
        *(undefined4 *)(iVar4 + 0x58) = uVar8;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar1 = 0;
        uVar8 = func_0x02b449f8(iVar5,0);
        if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x036a1750(uVar8,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
        if ((iVar5 != 0) && (uVar1 = 0, *(char *)(iVar5 + 0x2c) != '\0')) {
          uVar1 = 1;
        }
        iVar5 = *(int *)(*piVar10 + 0x74);
        *(undefined1 *)(iVar4 + 0x5c) = uVar1;
        if (iVar5 == 0) {
          func_0x01384ab4();
        }
        func_0x019930d8(iVar4,0,0);
      }
      else {
        iVar4 = func_0x0229f13c(0x94b,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02173f80(iVar4,iVar5,0);
      }
      return;
    }
    iVar3 = func_0x0229f13c(0x13da,0);
    iVar4 = iVar5;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x1724,0);
    iVar2 = iVar5;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar4,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,iVar4,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar4 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar5,uVar8,&uStack_38,uVar6,0,0);
  return;
}



// ===== FAT.ActivityTransit.<>c__DisplayClass5_0$$<Exit>b__0 RVA 0x2b48320 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b58320(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  
  pcVar1 = (char *)(_UNK_02b585e0 + 0x2b58338);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b585e4 + 0x2b5834c));
    func_0x01384978(*(undefined4 *)(_UNK_02b585e8 + 0x2b58358));
    func_0x01384978(*(undefined4 *)(_UNK_02b585ec + 0x2b58364));
    func_0x01384978(*(undefined4 *)(_UNK_02b585f0 + 0x2b58370));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01ef5998(iVar2,0);
  piVar6 = *(int **)(_UNK_02b585f4 + 0x2b583a0);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar6;
  }
  piVar7 = *(int **)(_UNK_02b585f8 + 0x2b583c0);
  iVar4 = *piVar7;
  iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x60);
  iVar2 = *(int *)(iVar4 + 0x1c);
  if (iVar2 == 0) {
    func_0x0140024c(iVar4);
    iVar2 = *(int *)(iVar4 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  uVar5 = **(undefined4 **)(iVar2 + 0x5c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01ef58d8(iVar3,uVar5,0);
  if (*(char *)(param_1 + 0xc) == '\0' &&
      **(char **)(**(int **)(_UNK_02b585fc + 0x2b5844c) + 0x5c) == '\0') {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xe4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01d75fcc(iVar2,0,0,0,0,0);
  }
  else {
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar6;
    }
    iVar4 = *piVar7;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x3c);
    iVar2 = *(int *)(iVar4 + 0x1c);
    if (iVar2 == 0) {
      func_0x0140024c(iVar4);
      iVar2 = *(int *)(iVar4 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    uVar5 = **(undefined4 **)(iVar2 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x01ef58d8(iVar3,uVar5,0);
  }
  iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02b58600 + 0x2b58554));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01eeb900(iVar2,1,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xfc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_01e8007c(iVar2,0,0,0);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02b585d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  return;
}


