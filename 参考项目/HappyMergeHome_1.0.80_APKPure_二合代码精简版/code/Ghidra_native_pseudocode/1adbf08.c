
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aebf08(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01aec194 + 0x1aebf20);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aec198 + 0x1aebf34));
    func_0x01438628(*(undefined4 *)(_UNK_01aec19c + 0x1aebf40));
    func_0x01438628(*(undefined4 *)(_UNK_01aec1a0 + 0x1aebf4c));
    func_0x01438628(*(undefined4 *)(_UNK_01aec1a4 + 0x1aebf58));
    func_0x01438628(*(undefined4 *)(_UNK_01aec1a8 + 0x1aebf64));
    func_0x01438628(*(undefined4 *)(_UNK_01aec1ac + 0x1aebf70));
    func_0x01438628(*(undefined4 *)(_UNK_01aec1b0 + 0x1aebf7c));
    func_0x01438628(*(undefined4 *)(_UNK_01aec1b4 + 0x1aebf88));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xcf7,0);
  if (iVar1 == 0) {
    piVar8 = (int *)(param_1 + 0x44);
    if (*piVar8 == 0) {
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01aec1b8 + 0x1aec000));
      func_0x024f063c(uVar6,**(undefined4 **)(_UNK_01aec1bc + 0x1aec014));
      *(undefined4 *)(param_1 + 0x44) = uVar6;
      func_0x014385cc(piVar8,uVar6);
      iVar1 = FUN_01ae5790(param_1);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_01aec1c0 + 0x1aec048) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aec1c4 + 0x1aec064));
        iVar5 = FUN_01ae5790(param_1);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar5 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x029b1058(iVar1,uVar6,0);
        if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
          iVar5 = 0;
          puVar9 = *(undefined4 **)(_UNK_01aec1c8 + 0x1aec0cc);
          puVar10 = *(undefined4 **)(_UNK_01aec1cc + 0x1aec0d4);
          do {
            iVar7 = *piVar8;
            iVar2 = func_0x0152983c(iVar1,iVar5,*puVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x2c);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024f0584(iVar7,uVar6,*puVar10);
            if (iVar2 == 0) {
              iVar7 = *piVar8;
              iVar2 = func_0x0152983c(iVar1,iVar5,*puVar9);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar3 = *(undefined4 *)(iVar2 + 0x2c);
              uVar6 = func_0x0152983c(iVar1,iVar5,*puVar9);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f1078(iVar7,uVar3,uVar6,**(undefined4 **)(_UNK_01aec1d0 + 0x1aec178));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar1 + 0xc));
        }
      }
    }
    return *piVar8;
  }
  iVar1 = func_0x029540a4(0xcf7,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_0288427c + 0x288419c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02884280 + 0x28841b0),param_1,0);
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
  iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02884284 + 0x288426c));
  return iVar1;
}

