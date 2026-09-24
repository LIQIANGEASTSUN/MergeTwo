
/* WARNING: Possible PIC construction at 0x01aed8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01aed9d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aed8d0) */
/* WARNING: Removing unreachable block (ram,0x01aed8e8) */
/* WARNING: Removing unreachable block (ram,0x01aed8f8) */
/* WARNING: Removing unreachable block (ram,0x01aed8fc) */
/* WARNING: Removing unreachable block (ram,0x01aed918) */
/* WARNING: Removing unreachable block (ram,0x01aed920) */
/* WARNING: Removing unreachable block (ram,0x01aed940) */
/* WARNING: Removing unreachable block (ram,0x01aed94c) */
/* WARNING: Removing unreachable block (ram,0x01aed95c) */
/* WARNING: Removing unreachable block (ram,0x01aed960) */
/* WARNING: Removing unreachable block (ram,0x01aed96c) */
/* WARNING: Removing unreachable block (ram,0x01aed970) */
/* WARNING: Removing unreachable block (ram,0x01aed984) */
/* WARNING: Removing unreachable block (ram,0x01aed988) */
/* WARNING: Removing unreachable block (ram,0x01aed998) */
/* WARNING: Removing unreachable block (ram,0x01aed99c) */
/* WARNING: Removing unreachable block (ram,0x01aed9c4) */
/* WARNING: Removing unreachable block (ram,0x01aed9c8) */
/* WARNING: Removing unreachable block (ram,0x01aed9d8) */
/* WARNING: Removing unreachable block (ram,0x01aed9e0) */
/* WARNING: Removing unreachable block (ram,0x01aed9f0) */
/* WARNING: Removing unreachable block (ram,0x01aed9f4) */
/* WARNING: Removing unreachable block (ram,0x01aeda18) */
/* WARNING: Removing unreachable block (ram,0x01aeda1c) */
/* WARNING: Removing unreachable block (ram,0x01aeda38) */
/* WARNING: Removing unreachable block (ram,0x01aeda3c) */
/* WARNING: Removing unreachable block (ram,0x01aeda60) */
/* WARNING: Removing unreachable block (ram,0x01aeda70) */
/* WARNING: Removing unreachable block (ram,0x01aeda74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aed6b4(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01aeda8c + 0x1aed6cc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeda90 + 0x1aed6e0));
    func_0x01438628(*(undefined4 *)(_UNK_01aeda94 + 0x1aed6ec));
    func_0x01438628(*(undefined4 *)(_UNK_01aeda98 + 0x1aed6f8));
    func_0x01438628(*(undefined4 *)(_UNK_01aeda9c + 0x1aed704));
    func_0x01438628(*(undefined4 *)(_UNK_01aedaa0 + 0x1aed710));
    func_0x01438628(*(undefined4 *)(_UNK_01aedaa4 + 0x1aed71c));
    func_0x01438628(*(undefined4 *)(_UNK_01aedaa8 + 0x1aed728));
    func_0x01438628(*(undefined4 *)(_UNK_01aedaac + 0x1aed734));
    func_0x01438628(*(undefined4 *)(_UNK_01aedab0 + 0x1aed740));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bb7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bb7,0);
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
  if (((iVar1 != 0) && (iVar1 = FUN_01ae4df4(param_1), iVar1 != 0)) &&
     (iVar1 = func_0x01b169d4(0), iVar1 != 0)) {
    if (*(int *)(**(int **)(_UNK_01aedab4 + 0x1aed7d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e96a8(**(undefined4 **)(_UNK_01aedab8 + 0x1aed7ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b76b98(iVar1,0,**(undefined4 **)(_UNK_01aedabc + 0x1aed818),0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01aedac0 + 0x1aed834) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aedac4 + 0x1aed850));
      piVar5 = *(int **)(_UNK_01aedac8 + 0x1aed864);
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar5;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x130);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02b0fd48(iVar1,uVar6,0);
      if (*(int *)(**(int **)(_UNK_01aedacc + 0x1aed8ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = (*(code *)&UNK_05d3e9a4)(uVar6,0,0);
      return uVar6;
    }
  }
  return 0;
}

