/**
 * This file is part of UnX.
 *
 * UnX is free software : you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * as published by The Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * UnX is distributed in the hope that it will be useful,
 *
 * But WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with UnX.
 *
 *   If not, see <http://www.gnu.org/licenses/>.
 *
**/

namespace unx
{
  namespace CheatManager {
    void Init     ();
    void Shutdown ();
  };

  void CheatTimer_FFX  (void);
  void CheatTimer_FFX2 (void);

  enum {
    CHEAT_TIMER_FFX  = 0x68993,
    CHEAT_TIMER_FFX2 = 0x68994
  };
}