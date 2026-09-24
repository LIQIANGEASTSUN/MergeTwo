
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c230dc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar2 = (char *)(_UNK_02c2331c + 0x2c230fc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c23320 + 0x2c23110));
    func_0x01438628(*(undefined4 *)(_UNK_02c23324 + 0x2c2311c));
    func_0x01438628(*(undefined4 *)(_UNK_02c23328 + 0x2c23128));
    func_0x01438628(*(undefined4 *)(_UNK_02c2332c + 0x2c23134));
    func_0x01438628(*(undefined4 *)(_UNK_02c23330 + 0x2c23140));
    func_0x01438628(*(undefined4 *)(_UNK_02c23334 + 0x2c2314c));
    func_0x01438628(*(undefined4 *)(_UNK_02c23338 + 0x2c23158));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xea4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xea4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869ba4(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c2333c + 0x2c231c0));
  func_0x02c47138(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 8) = param_1;
  func_0x014385cc((int *)(iVar1 + 8),param_1);
  puVar3 = (undefined4 *)(iVar1 + 0xc);
  *puVar3 = param_2;
  func_0x014385cc(puVar3,param_2);
  if (param_3 != 0) {
    iVar4 = *(int *)(param_1 + 0x120);
    uVar5 = *puVar3;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x04753c80(iVar4,uVar5,**(undefined4 **)(_UNK_02c23340 + 0x2c2322c));
    if (iVar4 == 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      uVar7 = *(undefined4 *)(param_1 + 0xc4);
      uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c23344 + 0x2c23260));
      func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_02c23348 + 0x2c23288),0);
      if (*(int *)(**(int **)(_UNK_02c2334c + 0x2c2329c) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar5 = func_0x02aee9b4(uVar7,uVar6,**(undefined4 **)(_UNK_02c23350 + 0x2c232c0),uVar5,1,0);
      uVar5 = func_0x024ef208(param_1,uVar5,0);
      iVar1 = *(int *)(param_1 + 0x120);
      uVar6 = *puVar3;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0475463c(iVar1,uVar6,uVar5,2,
                      *(undefined4 *)
                       (*(int *)(*(int *)(**(int **)(_UNK_02c23354 + 0x2c2330c) + 0x10) + 0x60) +
                       0x88));
      return;
    }
  }
  uVar5 = *puVar3;
  iVar1 = *(int *)(param_1 + 0xc4);
  pcVar2 = (char *)(_UNK_02c23448 + 0x2c23378);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c2344c + 0x2c2338c));
    *pcVar2 = '\x01';
  }
  iVar4 = func_0x02953fd4(0xea7,0);
  if (iVar4 == 0) {
    if (*(int *)(**(int **)(_UNK_02c23450 + 0x2c233f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024eec50(iVar1,0,0);
    if (iVar4 == 0) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f1368(iVar1,uVar5,0,0,0);
    }
  }
  else {
    iVar4 = func_0x029540a4(0xea7,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar4,param_1,iVar1,uVar5,0);
  }
  return;
}

