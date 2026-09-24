
/* WARNING: Possible PIC construction at 0x02f15308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f1530c) */
/* WARNING: Removing unreachable block (ram,0x02f15324) */
/* WARNING: Removing unreachable block (ram,0x02f15328) */
/* WARNING: Removing unreachable block (ram,0x02f15388) */
/* WARNING: Removing unreachable block (ram,0x02f1538c) */
/* WARNING: Removing unreachable block (ram,0x02f153e8) */
/* WARNING: Removing unreachable block (ram,0x02f153ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1517c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02f1540c + 0x2f151a4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f15410 + 0x2f151c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f15414 + 0x2f151d4));
    func_0x01438628(*(undefined4 *)(_UNK_02f15418 + 0x2f151e0));
    func_0x01438628(*(undefined4 *)(_UNK_02f1541c + 0x2f151ec));
    func_0x01438628(*(undefined4 *)(_UNK_02f15420 + 0x2f151f8));
    func_0x01438628(*(undefined4 *)(_UNK_02f15424 + 0x2f15204));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e39,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e39,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fb9a4(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f15428 + 0x2f15288));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0x14) = param_7;
  func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
  piVar2 = *(int **)(_UNK_02f1542c + 0x2f152c8);
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x02f15448();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,1,0);
  return;
}

