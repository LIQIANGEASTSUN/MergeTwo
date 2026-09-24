
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c3ab8c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02c3b04c + 0x2c3abb0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3b050 + 0x2c3abc4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b054 + 0x2c3abd0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b058 + 0x2c3abdc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b05c + 0x2c3abe8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b060 + 0x2c3abf4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b064 + 0x2c3ac00));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b068 + 0x2c3ac0c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b06c + 0x2c3ac18));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b070 + 0x2c3ac24));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b074 + 0x2c3ac30));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = 0;
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x11dc,0);
  if (iVar1 == 0) {
    uVar10 = func_0x02c3b0a4(param_1,param_2);
    iVar5 = (int)((ulonglong)uVar10 >> 0x20);
    iVar3 = (int)uVar10;
    iVar1 = 0;
    iVar2 = param_4;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
      iVar2 = iVar3;
    }
    if (iVar3 != 0 && iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
        iVar5 = extraout_r1;
      }
      iVar1 = *(int *)(param_2 + 0x3c);
      if (iVar1 != 0) {
        iVar5 = *(int *)(iVar1 + 0xc);
      }
      if (iVar1 != 0 && iVar5 != 0) {
        uVar4 = func_0x03554cb4(iVar1,**(undefined4 **)(_UNK_02c3b078 + 0x2c3af2c));
        iVar1 = func_0x02c3b8a8(param_1,uVar4,param_4);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = func_0x02c3b928(param_1,uVar4,param_3,param_4);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = func_0x02c3bd14(param_1,uVar4,param_3,param_4);
        if (iVar1 != 0) {
          return 1;
        }
      }
      func_0x024ef7ac(&uStack_48,iVar2,**(undefined4 **)(_UNK_02c3b07c + 0x2c3ad04));
      uVar8 = 0;
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
LAB_02c3ad1c:
      do {
        do {
          iVar1 = func_0x04873f24(&uStack_38,**(undefined4 **)(_UNK_02c3b094 + 0x2c3ad28));
          uVar4 = uStack_2c;
          if (iVar1 == 0) {
            iVar1 = 0xf;
            goto LAB_02c3aef8;
          }
          if (*(int *)(**(int **)(_UNK_02c3b080 + 0x2c3ad44) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3b084 + 0x2c3ad64));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x029a6fa8(iVar1,uVar4,0);
        } while (iVar2 == 0);
        uVar10 = func_0x02c3bd98(param_1,iVar2);
        iVar1 = (int)((ulonglong)uVar10 >> 0x20);
        iVar5 = (int)uVar10;
        iVar3 = *(int *)(iVar2 + 0x3c);
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 != 0 && iVar1 != 0) {
          iVar5 = func_0x03554cb4(iVar3,**(undefined4 **)(_UNK_02c3b088 + 0x2c3ae44));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f0f34(iVar5,uVar4,**(undefined4 **)(_UNK_02c3b08c + 0x2c3ae64));
          if (iVar1 != 0) goto LAB_02c3adb8;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar5 + 8);
          uVar9 = *(uint *)(iVar5 + 0xc);
          piVar6 = *(int **)(_UNK_02c3b090 + 0x2c3aea4);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar3 = *piVar6;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar9 + 1;
            *(undefined4 *)(iVar1 + uVar9 * 4 + 0x10) = uVar4;
          }
          else {
            func_0x024f0520(iVar5,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
          }
        }
        else {
LAB_02c3adb8:
          if (iVar5 == 0) goto LAB_02c3ad1c;
        }
        if (*(int *)(iVar5 + 0xc) == 0) goto LAB_02c3ad1c;
        iVar3 = func_0x02c3b8a8(param_1,iVar5,param_4);
        iVar1 = 0xc;
        if (((iVar3 != 0) || (iVar3 = func_0x02c3b928(param_1,iVar5,param_3,param_4), iVar3 != 0))
           || (iVar5 = func_0x02c3bd14(param_1,iVar5,param_3,param_4), iVar5 != 0)) {
          uVar8 = 1;
          break;
        }
        iVar5 = *(int *)(iVar2 + 0x3c);
        iVar2 = 0;
        if (iVar5 != 0) {
          iVar2 = *(int *)(iVar5 + 0xc);
        }
      } while (iVar5 == 0 || iVar2 == 0);
LAB_02c3aef8:
      func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3b098 + 0x2c3af04));
      uVar8 = uVar8 & iVar1 == 0xc;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x11dc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0289d560(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar8;
}

