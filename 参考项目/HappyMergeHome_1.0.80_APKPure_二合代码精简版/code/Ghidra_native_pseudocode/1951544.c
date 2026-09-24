
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01961544(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_019617fc + 0x196155c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01961800 + 0x1961570));
    func_0x01438628(*(undefined4 *)(_UNK_01961804 + 0x196157c));
    func_0x01438628(*(undefined4 *)(_UNK_01961808 + 0x1961588));
    func_0x01438628(*(undefined4 *)(_UNK_0196180c + 0x1961594));
    func_0x01438628(*(undefined4 *)(_UNK_01961810 + 0x19615a0));
    func_0x01438628(*(undefined4 *)(_UNK_01961814 + 0x19615ac));
    func_0x01438628(*(undefined4 *)(_UNK_01961818 + 0x19615b8));
    func_0x01438628(*(undefined4 *)(_UNK_0196181c + 0x19615c4));
    func_0x01438628(*(undefined4 *)(_UNK_01961820 + 0x19615d0));
    func_0x01438628(*(undefined4 *)(_UNK_01961824 + 0x19615dc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x98d6,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01961828 + 0x196164c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0196182c + 0x1961660));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01961830 + 0x1961684) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01961834 + 0x19616a0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d5598(iVar1,**(undefined4 **)(_UNK_01961838 + 0x19616c0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0196183c + 0x19616ec));
      puVar5 = *(undefined4 **)(_UNK_01961840 + 0x1961700);
      puVar7 = *(undefined4 **)(_UNK_01961844 + 0x1961708);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01961848 + 0x1961760));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x98d6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292b464(iVar1,param_1,0);
  }
  return iVar1;
}

