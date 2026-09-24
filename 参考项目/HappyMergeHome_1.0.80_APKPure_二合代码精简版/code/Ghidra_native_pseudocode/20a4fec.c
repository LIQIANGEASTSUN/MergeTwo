
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020b4fec(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_020b51d8 + 0x20b5004);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_020b51dc + 0x20b5018));
    func_0x01438628(*(undefined4 *)(_UNK_020b51e0 + 0x20b5024));
    func_0x01438628(*(undefined4 *)(_UNK_020b51e4 + 0x20b5030));
    func_0x01438628(*(undefined4 *)(_UNK_020b51e8 + 0x20b503c));
    func_0x01438628(*(undefined4 *)(_UNK_020b51ec + 0x20b5048));
    func_0x01438628(*(undefined4 *)(_UNK_020b51f0 + 0x20b5054));
    func_0x01438628(*(undefined4 *)(_UNK_020b51f4 + 0x20b5060));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadd3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xadd3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_38,0,0);
    return uVar5;
  }
  if (param_2 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar1 = (**(code **)(*param_2 + 0x198))
                    (param_2,**(undefined4 **)(_UNK_020b51f8 + 0x20b50cc),
                     *(undefined4 *)(*param_2 + 0x19c));
  if ((((iVar1 != 0) &&
       (iVar1 = (**(code **)(*param_2 + 0x198))
                          (param_2,**(undefined4 **)(_UNK_020b51fc + 0x20b50f4),
                           *(undefined4 *)(*param_2 + 0x19c)), iVar1 != 0)) &&
      (iVar1 = (**(code **)(*param_2 + 0x198))
                         (param_2,**(undefined4 **)(_UNK_020b5200 + 0x20b511c),
                          *(undefined4 *)(*param_2 + 0x19c)), iVar1 != 0)) &&
     (((iVar1 = (**(code **)(*param_2 + 0x198))
                          (param_2,**(undefined4 **)(_UNK_020b5204 + 0x20b5144),
                           *(undefined4 *)(*param_2 + 0x19c)), iVar1 != 0 &&
       (iVar1 = (**(code **)(*param_2 + 0x198))
                          (param_2,**(undefined4 **)(_UNK_020b5208 + 0x20b516c),
                           *(undefined4 *)(*param_2 + 0x19c)), iVar1 != 0)) &&
      (iVar1 = (**(code **)(*param_2 + 0x198))
                         (param_2,**(undefined4 **)(_UNK_020b520c + 0x20b5194),
                          *(undefined4 *)(*param_2 + 0x19c)), iVar1 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x020b51cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_2 + 0x198))
                      (param_2,**(undefined4 **)(_UNK_020b5210 + 0x20b51c4),
                       *(undefined4 *)(*param_2 + 0x19c));
    return uVar5;
  }
  return 0;
}

