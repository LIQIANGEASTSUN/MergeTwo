
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03115cfc(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_0311614c + 0x3115d14);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03116150 + 0x3115d28));
    func_0x01438628(*(undefined4 *)(_UNK_03116154 + 0x3115d34));
    func_0x01438628(*(undefined4 *)(_UNK_03116158 + 0x3115d40));
    func_0x01438628(*(undefined4 *)(_UNK_0311615c + 0x3115d4c));
    func_0x01438628(*(undefined4 *)(_UNK_03116160 + 0x3115d58));
    func_0x01438628(*(undefined4 *)(_UNK_03116164 + 0x3115d64));
    func_0x01438628(*(undefined4 *)(_UNK_03116168 + 0x3115d70));
    func_0x01438628(*(undefined4 *)(_UNK_0311616c + 0x3115d7c));
    func_0x01438628(*(undefined4 *)(_UNK_03116170 + 0x3115d88));
    func_0x01438628(*(undefined4 *)(_UNK_03116174 + 0x3115d94));
    func_0x01438628(*(undefined4 *)(_UNK_03116178 + 0x3115da0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x786e,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_0311617c + 0x3115dfc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03116180 + 0x3115e18));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_03116184 + 0x3115e38));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x03b72148(iVar2,0x36,**(undefined4 **)(_UNK_03116188 + 0x3115e70));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_0311618c + 0x3115e90) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03116190 + 0x3115eac));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar7 + 0x14);
      iVar7 = FUN_0310c164(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (*(int *)(**(int **)(_UNK_03116194 + 0x3115ee8) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar6 = (char *)(_UNK_03116198 + 0x3115f0c);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_0311619c + 0x3115f28));
        *pcVar6 = '\x01';
      }
      uVar8 = VectorSignedToFloat(iVar7 / 2,(byte)(in_fpscr >> 0x16) & 3);
      if (*(int *)(**(int **)(_UNK_031161a0 + 0x3115f40) + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar3 = (float)func_0x024f12cc(uVar8,0,0);
      iVar7 = (int)fVar3;
      if (fVar3 == _UNK_03116148) {
        iVar7 = -0x80000000;
      }
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_031161a4 + 0x3115f9c);
      iVar4 = func_0x04cfd760(iVar9,0,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x30);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0xc) <= iVar7) {
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x04cfd760(iVar9,0,*puVar10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0xc) + -1;
      }
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x04cfd760(iVar9,0,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar1 = 1;
      if (*(int *)(iVar4 + 0x30) != 0) {
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x04cfd760(iVar9,0,*puVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar9 + 0x30);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x04cd26d0(iVar9,iVar7,**(undefined4 **)(_UNK_031161a8 + 0x3116098));
        iVar9 = FUN_0310c164(param_1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar9 + 0x70) * 6;
        if (iVar9 < iVar7 * 6) {
          puVar10 = *(undefined4 **)(_UNK_031161ac + 0x31160e4);
          do {
            iVar4 = *(int *)(iVar2 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b780b0(iVar4,iVar9,*puVar10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar1 = (uint)(*(int *)(iVar4 + 0xc) == 1);
          } while ((iVar7 * 6 + -1 != iVar9) && (iVar9 = iVar9 + 1, *(int *)(iVar4 + 0xc) == 1));
        }
      }
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x786e,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
  uVar1 = func_0x024f56e0(&uStack_30,0,0);
  return uVar1;
}

