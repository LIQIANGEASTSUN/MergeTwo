
/* WARNING: Possible PIC construction at 0x01aeb424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01aeb52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aeb428) */
/* WARNING: Removing unreachable block (ram,0x01aeb440) */
/* WARNING: Removing unreachable block (ram,0x01aeb450) */
/* WARNING: Removing unreachable block (ram,0x01aeb454) */
/* WARNING: Removing unreachable block (ram,0x01aeb470) */
/* WARNING: Removing unreachable block (ram,0x01aeb478) */
/* WARNING: Removing unreachable block (ram,0x01aeb498) */
/* WARNING: Removing unreachable block (ram,0x01aeb4a4) */
/* WARNING: Removing unreachable block (ram,0x01aeb4b4) */
/* WARNING: Removing unreachable block (ram,0x01aeb4b8) */
/* WARNING: Removing unreachable block (ram,0x01aeb4c4) */
/* WARNING: Removing unreachable block (ram,0x01aeb4c8) */
/* WARNING: Removing unreachable block (ram,0x01aeb4dc) */
/* WARNING: Removing unreachable block (ram,0x01aeb4e0) */
/* WARNING: Removing unreachable block (ram,0x01aeb4f0) */
/* WARNING: Removing unreachable block (ram,0x01aeb4f4) */
/* WARNING: Removing unreachable block (ram,0x01aeb51c) */
/* WARNING: Removing unreachable block (ram,0x01aeb520) */
/* WARNING: Removing unreachable block (ram,0x01aeb530) */
/* WARNING: Removing unreachable block (ram,0x01aeb538) */
/* WARNING: Removing unreachable block (ram,0x01aeb548) */
/* WARNING: Removing unreachable block (ram,0x01aeb54c) */
/* WARNING: Removing unreachable block (ram,0x01aeb570) */
/* WARNING: Removing unreachable block (ram,0x01aeb574) */
/* WARNING: Removing unreachable block (ram,0x01aeb590) */
/* WARNING: Removing unreachable block (ram,0x01aeb594) */
/* WARNING: Removing unreachable block (ram,0x01aeb5b8) */
/* WARNING: Removing unreachable block (ram,0x01aeb5c8) */
/* WARNING: Removing unreachable block (ram,0x01aeb5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aeb220(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01aeb5e4 + 0x1aeb238);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeb5e8 + 0x1aeb24c));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb5ec + 0x1aeb258));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb5f0 + 0x1aeb264));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb5f4 + 0x1aeb270));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb5f8 + 0x1aeb27c));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb5fc + 0x1aeb288));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb600 + 0x1aeb294));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb604 + 0x1aeb2a0));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb608 + 0x1aeb2ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bbe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bbe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = FUN_01ae628c();
  if ((iVar1 != 0) && (iVar1 = FUN_01aeafb0(param_1), iVar1 != 0)) {
    if (*(int *)(**(int **)(_UNK_01aeb60c + 0x1aeb328) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e96a8(**(undefined4 **)(_UNK_01aeb610 + 0x1aeb344));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b76b98(iVar1,0,**(undefined4 **)(_UNK_01aeb614 + 0x1aeb370),0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01aeb618 + 0x1aeb38c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aeb61c + 0x1aeb3a8));
      piVar5 = *(int **)(_UNK_01aeb620 + 0x1aeb3bc);
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar5;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x154);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02b0fd48(iVar1,uVar6,0);
      if (*(int *)(**(int **)(_UNK_01aeb624 + 0x1aeb404) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = (*(code *)&UNK_05d3e9a4)(uVar6,0,0);
      return uVar6;
    }
  }
  return 0;
}

