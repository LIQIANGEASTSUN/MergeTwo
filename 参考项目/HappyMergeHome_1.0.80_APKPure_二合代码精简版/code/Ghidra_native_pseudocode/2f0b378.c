
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1b378(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02f1b540 + 0x2f1b394);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1b544 + 0x2f1b3a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f1b548 + 0x2f1b3b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1b54c + 0x2f1b3c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f1b550 + 0x2f1b3cc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2887,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f19af4(param_1,*(undefined4 *)(param_2 + 8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(**(int **)(_UNK_02f1b554 + 0x2f1b450) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar3 = func_0x02af43a8(uVar3,uVar5,0);
    if (*(int *)(**(int **)(_UNK_02f1b558 + 0x2f1b488) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = func_0x04cd26d0(iVar1,0,**(undefined4 **)(_UNK_02f1b55c + 0x2f1b4c8));
    uVar5 = func_0x01524ffc(&uStack_1c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar2,0x1dc,uVar5,**(undefined4 **)(_UNK_02f1b560 + 0x2f1b504),0,0,0);
    func_0x02f1b564(param_1,uVar3);
  }
  else {
    iVar1 = func_0x029540a4(0x2887,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

