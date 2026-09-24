/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityGroup.Option$$.ctor RVA 0x2b32624 =====

void FUN_02b42624(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}



// ===== FAT.ActivityGroup$$get_Activity RVA 0x2b3b508 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4b508(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x324f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x324f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022093b8 + 0x22092d8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022093bc + 0x22092ec),param_1,0);
      *pcVar4 = '\x01';
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022093c0 + 0x22093a8));
    return uVar5;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xd8);
}



// ===== FAT.ActivityGroup$$TryAdd RVA 0x2b3b574 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4b574(uint *param_1,int *param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02b4b960 + 0x2b4b594);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4b964 + 0x2b4b5ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b968 + 0x2b4b5b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b96c + 0x2b4b5c4));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b970 + 0x2b4b5d0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b974 + 0x2b4b5dc));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b978 + 0x2b4b5e8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b97c + 0x2b4b5f4));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_3c = (int *)0x0;
  uStack_38 = 0;
  iVar3 = func_0x0229f06c(0x1ce,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1ce,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f134(&uStack_48,iVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    *param_1 = uStack_48;
    param_1[1] = uStack_44;
    return;
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x02b436dc(0,param_4,param_5);
    if (iVar3 != 0) goto LAB_02b4b6e4;
    func_0x01384bf0();
LAB_02b4b704:
    iVar3 = func_0x02b438e8(param_3,param_4,param_5);
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_02b4b98c + 0x2b4b760) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02b4b9a8(&uStack_48,param_4,param_5,param_8,&uStack_38);
      uVar1 = uStack_44;
      if ((uStack_48 & 1) == 0) {
        uStack_44 = param_5;
        uStack_48 = param_4;
        uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b4b990 + 0x2b4b7a8),&uStack_48);
        uVar5 = func_0x0467272c(**(undefined4 **)(_UNK_02b4b994 + 0x2b4b7cc),uVar5,uVar1,0);
LAB_02b4b7d0:
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        func_0x02b45174(&uStack_50,param_3,param_4,param_5,uVar5);
        *param_1 = uStack_50;
        param_1[1] = uStack_4c;
        return;
      }
      (**(code **)(*param_2 + 0xf0))
                (&uStack_48,param_2,param_3,param_4,param_5,param_6,uStack_38,uStack_34,uStack_30,
                 uStack_2c,param_7,param_8,&piStack_3c,*(undefined4 *)(*param_2 + 0xf4));
      piVar2 = piStack_3c;
      if (((byte)uStack_48 & 1) != 0) {
        if (piStack_3c == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar2;
        (**(code **)(iVar3 + 0x168))(piVar2,param_7,*(undefined4 *)(iVar3 + 0x16c));
        piVar2 = piStack_3c;
        if (piStack_3c == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar2;
        iVar3 = (**(code **)(iVar3 + 0x108))(piVar2,*(undefined4 *)(iVar3 + 0x10c));
        if (iVar3 == 0) {
          uStack_44 = param_5;
          uStack_48 = param_4;
          uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b4b99c + 0x2b4b938),&uStack_48);
          uVar5 = func_0x046604e4(**(undefined4 **)(_UNK_02b4b9a0 + 0x2b4b958),uVar5,0);
          goto LAB_02b4b7d0;
        }
        func_0x02b4bb18(param_8,piStack_3c);
        piVar2 = piStack_3c;
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        func_0x02b47690(param_3,param_4,param_5,piVar2,param_7 == 0);
        uStack_44 = 0;
        puVar4 = *(undefined4 **)(_UNK_02b4b9a4 + 0x2b4b914);
        *param_1 = 0;
        param_1[1] = 0;
        uVar6 = *puVar4;
        uVar5 = 1;
        goto LAB_02b4b748;
      }
    }
    else {
      uStack_44 = **(uint **)(_UNK_02b4b980 + 0x2b4b728);
    }
    uVar5 = 0;
    puVar4 = *(undefined4 **)(_UNK_02b4b998 + 0x2b4b738);
  }
  else {
    iVar3 = func_0x02b436dc(param_3,param_4,param_5);
    if (iVar3 == 0) goto LAB_02b4b704;
LAB_02b4b6e4:
    uVar5 = 1;
    uStack_44 = **(uint **)(_UNK_02b4b984 + 0x2b4b6f4);
    puVar4 = *(undefined4 **)(_UNK_02b4b988 + 0x2b4b700);
  }
  uVar6 = *puVar4;
  *param_1 = 0;
  param_1[1] = 0;
LAB_02b4b748:
  func_0x038f3b0c(param_1,uVar5,uStack_44,uVar6);
  return;
}



// ===== FAT.ActivityGroup.Option$$Apply RVA 0x2b3bb18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4bb18(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  iVar2 = func_0x0229f06c(0x1f2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1f2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217ed9c + 0x217ec5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217eda0 + 0x217ec70),param_1,param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_0217eda4 + 0x217ec7c));
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *param_1;
    uStack_4c = param_1[1];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0217eda8 + 0x217eccc),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar1,&uStack_38,uVar3,1,0);
    func_0x02f5f3a8(&uStack_50,&uStack_38,0,**(undefined4 **)(_UNK_0217edac + 0x217ed80));
    *param_1 = uStack_50;
    param_1[1] = uStack_4c;
    return;
  }
  iVar2 = param_1[1];
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02b4bb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),param_2,*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  return;
}



// ===== FAT.ActivityGroup$$TryAddTo RVA 0x2b3bb94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4bb94(uint *param_1,int *param_2,int param_3,int param_4,uint param_5,undefined4 param_6
                 ,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_02b4bf30 + 0x2b4bbb4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4bf34 + 0x2b4bbcc));
    func_0x01384978(*(undefined4 *)(_UNK_02b4bf38 + 0x2b4bbd8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4bf3c + 0x2b4bbe4));
    func_0x01384978(*(undefined4 *)(_UNK_02b4bf40 + 0x2b4bbf0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4bf44 + 0x2b4bbfc));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_3c = (int *)0x0;
  uStack_38 = 0;
  iVar3 = func_0x0229f06c(0x735b,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_02b4bf48 + 0x2b4bcb8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_02b4b9a8(&uStack_48,param_5,param_6,param_9,&uStack_38);
    uVar1 = uStack_44;
    if ((uStack_48 & 1) == 0) {
      uStack_44 = param_6;
      uStack_48 = param_5;
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b4bf4c + 0x2b4bd00),&uStack_48);
      uVar4 = func_0x0467272c(**(undefined4 **)(_UNK_02b4bf50 + 0x2b4bd24),uVar4,uVar1,0);
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      func_0x02b45174(&uStack_50,param_4,param_5,param_6,uVar4);
      *param_1 = uStack_50;
      param_1[1] = uStack_4c;
    }
    else {
      (**(code **)(*param_2 + 0xf0))
                (&uStack_48,param_2,param_4,param_5,param_6,param_7,uStack_38,uStack_34,uStack_30,
                 uStack_2c,param_8,param_9,&piStack_3c,*(undefined4 *)(*param_2 + 0xf4));
      piVar2 = piStack_3c;
      if (((byte)uStack_48 & 1) == 0) {
        uVar5 = **(undefined4 **)(_UNK_02b4bf54 + 0x2b4bdf0);
        *param_1 = 0;
        param_1[1] = 0;
        uVar4 = 0;
      }
      else {
        if (piStack_3c == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar2;
        (**(code **)(iVar3 + 0x168))(piVar2,param_8,*(undefined4 *)(iVar3 + 0x16c));
        piVar2 = piStack_3c;
        if (piStack_3c == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar2;
        iVar3 = (**(code **)(iVar3 + 0x108))(piVar2,*(undefined4 *)(iVar3 + 0x10c));
        if (iVar3 == 0) {
          uStack_44 = param_6;
          uStack_48 = param_5;
          uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b4bf58 + 0x2b4becc),&uStack_48);
          uVar4 = func_0x046604e4(**(undefined4 **)(_UNK_02b4bf5c + 0x2b4beec),uVar4,0);
          if (param_4 == 0) {
            func_0x01384bf0();
          }
          func_0x02b45174(&uStack_50,param_4,param_5,param_6,uVar4);
          *param_1 = uStack_50;
          param_1[1] = uStack_4c;
          return;
        }
        FUN_02b4bb18(param_9,piStack_3c);
        piVar2 = piStack_3c;
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        (**(code **)(param_3 + 0xc))
                  (*(undefined4 *)(param_3 + 0x20),piVar2,*(undefined4 *)(param_3 + 0x14));
        uVar5 = **(undefined4 **)(_UNK_02b4bf60 + 0x2b4bea0);
        uVar4 = 1;
        *param_1 = 0;
        param_1[1] = 0;
        uStack_44 = 0;
      }
      func_0x038f3b0c(param_1,uVar4,uStack_44,uVar5);
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x735b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0224d610(&uStack_48,iVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,0);
    *param_1 = uStack_48;
    param_1[1] = uStack_44;
  }
  return;
}



// ===== FAT.ActivityGroup$$TryCreateByType RVA 0x2b3bf64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4bf64(uint *param_1,int *param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,char *param_12,int *param_13)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar5 = (char *)(_UNK_02b4c26c + 0x2b4bf84);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4c270 + 0x2b4bf9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4c274 + 0x2b4bfa8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4c278 + 0x2b4bfb4));
    func_0x01384978(*(undefined4 *)(_UNK_02b4c27c + 45400000));
    func_0x01384978(*(undefined4 *)(_UNK_02b4c280 + 0x2b4bfcc));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x1da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1da,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217e764(&uStack_38,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,param_11,param_12,param_13,0);
LAB_02b4c088:
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
    return;
  }
  *param_13 = 0;
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02b439c4(param_3,param_4,param_5,&uStack_28);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0xf8))
              (&uStack_38,param_2,param_6,param_7,param_8,param_9,param_10,
               *(undefined4 *)(*param_2 + 0xfc));
    if (((uStack_38 & 1) != 0) || (*param_12 != '\0')) {
      if (*(int *)(**(int **)(_UNK_02b4c28c + 0x2b4c134) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02b4c2a0(&uStack_38,param_7,param_8,param_9,param_10,param_6,&uStack_2c);
      if (((byte)uStack_38 & 1) != 0) {
        iVar1 = (**(code **)(*param_2 + 0x100))
                          (param_2,param_6,uStack_2c,*(undefined4 *)(*param_2 + 0x104));
        *param_13 = iVar1;
        if (iVar1 == 0) {
          uStack_3c = param_6;
          uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b4c290 + 0x2b4c1f4),&uStack_3c);
          uStack_34 = param_5;
          uStack_38 = param_4;
          uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b4c294 + 0x2b4c210),&uStack_38);
          uVar3 = func_0x0467272c(**(undefined4 **)(_UNK_02b4c298 + 0x2b4c234),uVar3,uVar4,0);
          if (param_3 == 0) {
            func_0x01384bf0();
          }
          func_0x02b45174(&uStack_48,param_3,param_4,param_5,uVar3);
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          goto LAB_02b4c088;
        }
        uVar3 = 1;
        uStack_34 = 0;
        uVar4 = **(undefined4 **)(_UNK_02b4c29c + 0x2b4c1dc);
        goto LAB_02b4c188;
      }
    }
    puVar2 = *(undefined4 **)(_UNK_02b4c288 + 0x2b4c180);
  }
  else {
    puVar2 = *(undefined4 **)(_UNK_02b4c284 + 0x2b4c0cc);
    uStack_34 = uStack_28;
  }
  uVar4 = *puVar2;
  uVar3 = 0;
LAB_02b4c188:
  *param_1 = 0;
  param_1[1] = 0;
  func_0x038f3b0c(param_1,uVar3,uStack_34,uVar4);
  return;
}



// ===== FAT.ActivityGroup$$CreateCheck RVA 0x2b3c4f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4c4f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_02b4c5dc + 0x2b4c518);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4c5e0 + 0x2b4c530));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1db,0);
  if (iVar1 == 0) {
    puVar2 = *(undefined4 **)(_UNK_02b4c5e4 + 0x2b4c5c4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038f3b0c(param_1,1,0,*puVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x1db,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217dff0(&uStack_30,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}



// ===== FAT.ActivityGroup$$Create RVA 0x2b3c5e8 =====

undefined4 FUN_02b4c5e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x1ec,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x1ec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217e630(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityGroup$$Filter RVA 0x2b3c658 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4c658(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_02b4c7ac + 0x2b4c678);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4c7b0 + 0x2b4c690));
    func_0x01384978(*(undefined4 *)(_UNK_02b4c7b4 + 0x2b4c69c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1cc,0);
  if (iVar1 == 0) {
    if (param_3 < 0) {
      bVar2 = true;
      uVar3 = 0;
      uVar4 = **(undefined4 **)(_UNK_02b4c7c0 + 0x2b4c754);
    }
    else {
      if (param_3 == 0) {
        (**(code **)(*param_2 + 0x110))
                  (&uStack_30,param_2,param_4,param_5,param_6,*(undefined4 *)(*param_2 + 0x114));
        goto LAB_02b4c794;
      }
      uVar3 = **(undefined4 **)(_UNK_02b4c7b8 + 0x2b4c718);
      uVar4 = **(undefined4 **)(_UNK_02b4c7bc + 0x2b4c724);
      bVar2 = param_3 == param_6;
    }
    uStack_2c = 0;
    uStack_30 = 0;
    func_0x038f3b0c(&uStack_30,bVar2,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x1cc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217d93c(&uStack_30,iVar1,param_2,param_3,param_4,param_5,param_6,0);
  }
LAB_02b4c794:
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}



// ===== FAT.ActivityGroup$$FilterOne RVA 0x2b3c7c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4c7c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02b4c894 + 0x2b4c7e4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4c898 + 0x2b4c7fc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1cd,0);
  if (iVar1 == 0) {
    puVar2 = *(undefined4 **)(_UNK_02b4c89c + 0x2b4c87c);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038f3b0c(param_1,1,0,*puVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x1cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217d7c4(&uStack_28,iVar1,param_2,param_3,param_4,param_5,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}



// ===== FAT.ActivityGroup$$End RVA 0x2b3c8a0 =====

void FUN_02b4c8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b4e8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityGroup$$.ctor RVA 0x2b3c90c =====

void FUN_02b4c90c(void)

{
  return;
}


